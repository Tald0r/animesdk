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

#define CLASS_3_3A4C0E377A700D6D_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7E7B860)
#define CLASS_3_3A4C0E377A700D6D_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7E7C0D0)
#define CLASS_3_3A4C0E377A700D6D_METHOD_3_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x7E7C150)
#define CLASS_3_3A4C0E377A700D6D_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x7E7D2A0)
#define CLASS_3_3A4C0E377A700D6D_METHOD_3_40C5968D970A15A2_OFFSET UNITYSDK_OFFSET(0x7E7B850)
#define CLASS_3_3A4C0E377A700D6D_METHOD_3_7DB601338350FF7F_OFFSET UNITYSDK_OFFSET(0x7E7B8C0)
#define CLASS_3_3A4C0E377A700D6D_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x7E7D140)
#define CLASS_3_3A4C0E377A700D6D_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x7E7BEA0)
#define CLASS_3_3A4C0E377A700D6D_METHOD_3_B1FCFA7C1C5829AA_OFFSET UNITYSDK_OFFSET(0x7E7BDD0)
#define CLASS_3_3A4C0E377A700D6D_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x7E7BFA0)
#define CLASS_3_3A4C0E377A700D6D_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x7E7B790)
#define CLASS_3_3A4C0E377A700D6D_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x7E7D450)
#define CLASS_3_3A4C0E377A700D6D__CTOR_OFFSET UNITYSDK_OFFSET(0x7E7D130)

inline static constexpr unsigned int Class_3_3A4C0E377A700D6D_TypeDefinitionIndex = 52861;

class Class_3_3A4C0E377A700D6D : public ::Class_2_0F138252A5783001
{
public:
	::MoleMole::Config::DynamicInt* Field_3_6; // 0x20
	::MoleMole::Config::DynamicInt* Field_3_9; // 0x28
	::MoleMole::Config::DynamicFloat* Field_3_0; // 0x30
	::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>* Field_3_1; // 0x38
	::System::String* Field_3_3; // 0x40
	::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>* Field_3_2; // 0x48
	::System::String* Field_3_4; // 0x50
	::System::Boolean Field_3_7; // 0x58
	::System::Boolean Field_3_8; // 0x59
	::MoleMole::Config::AbilityTargetting Field_3_5; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A4C0E377A700D6D__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*))((::PBYTE)hIl2Cpp + CLASS_3_3A4C0E377A700D6D_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126 Method_3_40C5968D970A15A2()
	{
		return ((::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A4C0E377A700D6D_METHOD_3_40C5968D970A15A2_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3A4C0E377A700D6D_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B1FCFA7C1C5829AA(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_3A4C0E377A700D6D_METHOD_3_B1FCFA7C1C5829AA_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A4C0E377A700D6D_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A4C0E377A700D6D_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_3A4C0E377A700D6D_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_3A4C0E377A700D6D_METHOD_3_0578713EDB32B89E_OFFSET))(this, a1);
	}

	static ::Class_3_3A4C0E377A700D6D* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_3A4C0E377A700D6D*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_3A4C0E377A700D6D_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	static ::Class_3_3A4C0E377A700D6D* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_3A4C0E377A700D6D*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3A4C0E377A700D6D_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*))((::PBYTE)hIl2Cpp + CLASS_3_3A4C0E377A700D6D_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_7DB601338350FF7F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3A4C0E377A700D6D_METHOD_3_7DB601338350FF7F_OFFSET))(this, a1, a2);
	}
};
