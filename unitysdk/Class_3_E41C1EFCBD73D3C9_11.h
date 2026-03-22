#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"

class Class_1_236FD73ABC492E3F;
class Class_1_C836D00248E6EFFE;
class Class_1_CE2E7DC9D5241F3C;
class Class_2_14986121AA61AD99;
class Class_2_8CAD669444D1F6DE;
class Class_2_D0F9C106E2DD0573;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_E41C1EFCBD73D3C9_11_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7103560)
#define CLASS_3_E41C1EFCBD73D3C9_11_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7104870)
#define CLASS_3_E41C1EFCBD73D3C9_11_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x71071F0)
#define CLASS_3_E41C1EFCBD73D3C9_11_METHOD_3_4817A7DC7B1BD409_OFFSET UNITYSDK_OFFSET(0x71048F0)
#define CLASS_3_E41C1EFCBD73D3C9_11_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x71073A0)
#define CLASS_3_E41C1EFCBD73D3C9_11_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x7104640)
#define CLASS_3_E41C1EFCBD73D3C9_11_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x7104740)
#define CLASS_3_E41C1EFCBD73D3C9_11_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x71034A0)
#define CLASS_3_E41C1EFCBD73D3C9_11_METHOD_3_D7E1E71AB8D59416_OFFSET UNITYSDK_OFFSET(0x7104440)
#define CLASS_3_E41C1EFCBD73D3C9_11_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x7107170)
#define CLASS_3_E41C1EFCBD73D3C9_11_METHOD_3_F4B2FF2CC3514F60_OFFSET UNITYSDK_OFFSET(0x71035C0)
#define CLASS_3_E41C1EFCBD73D3C9_11__CTOR_OFFSET UNITYSDK_OFFSET(0x7107100)

inline static constexpr unsigned int Class_3_E41C1EFCBD73D3C9_11_TypeDefinitionIndex = 68106;

class Class_3_E41C1EFCBD73D3C9_11 : public ::Class_2_0F138252A5783001
{
public:
	::MoleMole::Config::DynamicFloat* Field_3_24; // 0x20
	::System::Collections::Generic::List_1<::Class_2_D0F9C106E2DD0573*>* Field_3_21; // 0x28
	::MoleMole::Config::DynamicFloat* Field_3_18; // 0x30
	::MoleMole::Config::DynamicFloat* Field_3_13; // 0x38
	::MoleMole::Config::DynamicInt* Field_3_15; // 0x40
	::System::String* Field_3_19; // 0x48
	::MoleMole::Config::DynamicFloat* Field_3_5; // 0x50
	::Class_1_CE2E7DC9D5241F3C* Field_3_4; // 0x58
	::Class_1_CE2E7DC9D5241F3C* Field_3_12; // 0x60
	::System::String* Field_3_16; // 0x68
	::System::Collections::Generic::List_1<::Class_2_D0F9C106E2DD0573*>* Field_3_23; // 0x70
	::Class_1_CE2E7DC9D5241F3C* Field_3_8; // 0x78
	::Class_1_CE2E7DC9D5241F3C* Field_3_10; // 0x80
	::Class_1_CE2E7DC9D5241F3C* Field_3_6; // 0x88
	::System::Collections::Generic::List_1<::Class_2_D0F9C106E2DD0573*>* Field_3_22; // 0x90
	::MoleMole::Config::DynamicInt* Field_3_25; // 0x98
	::MoleMole::Config::DynamicFloat* Field_3_7; // 0xA0
	::MoleMole::Config::DynamicFloat* Field_3_9; // 0xA8
	::System::String* Field_3_20; // 0xB0
	::MoleMole::Config::DynamicFloat* Field_3_11; // 0xB8
	::MoleMole::Config::DynamicFloat* Field_3_14; // 0xC0
	::MoleMole::Config::AbilityTargetting Field_3_3; // 0xC8
	::System::Boolean Field_3_17; // 0xCC
	::System::Boolean Field_3_2; // 0xCD
	::System::Boolean Field_3_0; // 0xCE
	::MoleMole::Config::AbilityTargetting Field_3_1; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_11__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_11_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_11_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D7E1E71AB8D59416(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_11_METHOD_3_D7E1E71AB8D59416_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_11_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_11_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_11_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_4817A7DC7B1BD409(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_11_METHOD_3_4817A7DC7B1BD409_OFFSET))(this, a1);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_11_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_F4B2FF2CC3514F60(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_11_METHOD_3_F4B2FF2CC3514F60_OFFSET))(this, a1, a2);
	}

	static ::Class_3_E41C1EFCBD73D3C9_11* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_E41C1EFCBD73D3C9_11*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_11_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	static ::Class_3_E41C1EFCBD73D3C9_11* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_E41C1EFCBD73D3C9_11*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_11_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}
};
