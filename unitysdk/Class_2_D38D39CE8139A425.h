#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D0D2B3C2533F6DF2_3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_D38D39CE8139A425_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x9E37150)
#define CLASS_2_D38D39CE8139A425_FROMFLX_OFFSET UNITYSDK_OFFSET(0x9E36AC0)
#define CLASS_2_D38D39CE8139A425_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x9E37540)
#define CLASS_2_D38D39CE8139A425_METHOD_2_0E51239C21E29F50_OFFSET UNITYSDK_OFFSET(0x9E371B0)
#define CLASS_2_D38D39CE8139A425_METHOD_2_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x9E36B40)
#define CLASS_2_D38D39CE8139A425_METHOD_2_89FADE33F34E4AE0_OFFSET UNITYSDK_OFFSET(0x9E376F0)
#define CLASS_2_D38D39CE8139A425_METHOD_2_8C97CA3BAB7FB2D7_OFFSET UNITYSDK_OFFSET(0x9E36760)
#define CLASS_2_D38D39CE8139A425_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x9E36880)
#define CLASS_2_D38D39CE8139A425_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x9E36990)
#define CLASS_2_D38D39CE8139A425_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x9E373E0)
#define CLASS_2_D38D39CE8139A425_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x9E36890)
#define CLASS_2_D38D39CE8139A425__CTOR_OFFSET UNITYSDK_OFFSET(0x9E373D0)

inline static constexpr unsigned int Class_2_D38D39CE8139A425_TypeDefinitionIndex = 43128;

class Class_2_D38D39CE8139A425 : public ::Class_1_D0D2B3C2533F6DF2_3
{
public:
	::System::Single Field_2_3; // 0x10
	::System::Single Field_2_2; // 0x14
	::System::Single Field_2_1; // 0x18
	::System::Single Field_2_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425__CTOR_OFFSET))(this);
	}

	::System::Single Method_2_8C97CA3BAB7FB2D7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_METHOD_2_8C97CA3BAB7FB2D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
	}

	::Class_1_D0D2B3C2533F6DF2_3* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_D0D2B3C2533F6DF2_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_METHOD_2_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_FROMBINARY_OFFSET))(this, a1, a2);
	}

	static ::Class_2_D38D39CE8139A425* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_D38D39CE8139A425*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	static ::Class_2_D38D39CE8139A425* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_D38D39CE8139A425*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_METHOD_2_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}

	::System::Single Method_2_89FADE33F34E4AE0(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_METHOD_2_89FADE33F34E4AE0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0E51239C21E29F50(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_METHOD_2_0E51239C21E29F50_OFFSET))(this, a1, a2);
	}
};
