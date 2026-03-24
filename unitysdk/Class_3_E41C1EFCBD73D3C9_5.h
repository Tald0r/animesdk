#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/Class_2_0F138252A5783001_Enum_3_FD724454F35FC126.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"

class Class_1_236FD73ABC492E3F;
class Class_1_C836D00248E6EFFE;
class Class_2_14986121AA61AD99;
class Class_2_4521B631ACA75155;
class Class_2_8CAD669444D1F6DE;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_E41C1EFCBD73D3C9_5_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7730970)
#define CLASS_3_E41C1EFCBD73D3C9_5_FROMFLX_OFFSET UNITYSDK_OFFSET(0x77315D0)
#define CLASS_3_E41C1EFCBD73D3C9_5_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x7732E60)
#define CLASS_3_E41C1EFCBD73D3C9_5_METHOD_3_2210CC3E4BA6580C_OFFSET UNITYSDK_OFFSET(0x77309D0)
#define CLASS_3_E41C1EFCBD73D3C9_5_METHOD_3_40C5968D970A15A2_OFFSET UNITYSDK_OFFSET(0x7730960)
#define CLASS_3_E41C1EFCBD73D3C9_5_METHOD_3_82A3EC7819F9DAA7_OFFSET UNITYSDK_OFFSET(0x7731650)
#define CLASS_3_E41C1EFCBD73D3C9_5_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x7733010)
#define CLASS_3_E41C1EFCBD73D3C9_5_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x77313A0)
#define CLASS_3_E41C1EFCBD73D3C9_5_METHOD_3_B26BEB40BF099BA2_OFFSET UNITYSDK_OFFSET(0x7731250)
#define CLASS_3_E41C1EFCBD73D3C9_5_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x77314A0)
#define CLASS_3_E41C1EFCBD73D3C9_5_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x77308A0)
#define CLASS_3_E41C1EFCBD73D3C9_5_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x7732DE0)
#define CLASS_3_E41C1EFCBD73D3C9_5__CTOR_OFFSET UNITYSDK_OFFSET(0x7732DA0)

inline static constexpr unsigned int Class_3_E41C1EFCBD73D3C9_5_TypeDefinitionIndex = 67174;

class Class_3_E41C1EFCBD73D3C9_5 : public ::Class_2_0F138252A5783001
{
public:
	::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>* Field_3_12; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_14; // 0x28
	::MoleMole::Config::DynamicInt* Field_3_4; // 0x30
	::MoleMole::Config::DynamicFloat* Field_3_6; // 0x38
	::MoleMole::Config::DynamicInt* Field_3_1; // 0x40
	::System::Collections::Generic::List_1<::System::String*>* Field_3_8; // 0x48
	::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>* Field_3_11; // 0x50
	::System::Collections::Generic::List_1<::System::String*>* Field_3_7; // 0x58
	::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>* Field_3_10; // 0x60
	::System::String* Field_3_3; // 0x68
	::MoleMole::Config::DynamicFloat* Field_3_5; // 0x70
	::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>* Field_3_13; // 0x78
	::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>* Field_3_9; // 0x80
	::MoleMole::Config::AbilityTargetting Field_3_2; // 0x88
	::System::Boolean Field_3_0; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_5__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_5_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126 Method_3_40C5968D970A15A2()
	{
		return ((::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_5_METHOD_3_40C5968D970A15A2_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_5_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B26BEB40BF099BA2(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_5_METHOD_3_B26BEB40BF099BA2_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_5_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_5_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_5_FROMFLX_OFFSET))(this, a1);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_5_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_3_E41C1EFCBD73D3C9_5* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_E41C1EFCBD73D3C9_5*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_5_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_2210CC3E4BA6580C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_5_METHOD_3_2210CC3E4BA6580C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_82A3EC7819F9DAA7(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_5_METHOD_3_82A3EC7819F9DAA7_OFFSET))(this, a1);
	}

	static ::Class_3_E41C1EFCBD73D3C9_5* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_E41C1EFCBD73D3C9_5*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_5_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}
};
