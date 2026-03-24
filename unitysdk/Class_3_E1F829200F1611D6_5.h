#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_C836D00248E6EFFE;
class Class_2_14986121AA61AD99;
class Class_2_4521B631ACA75155;
class Class_2_8CAD669444D1F6DE;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_E1F829200F1611D6_5_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x8D06C40)
#define CLASS_3_E1F829200F1611D6_5_FROMFLX_OFFSET UNITYSDK_OFFSET(0x8D075C0)
#define CLASS_3_E1F829200F1611D6_5_METHOD_3_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x8D07640)
#define CLASS_3_E1F829200F1611D6_5_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x8D08690)
#define CLASS_3_E1F829200F1611D6_5_METHOD_3_5EB2504F7A9FE747_OFFSET UNITYSDK_OFFSET(0x8D06CA0)
#define CLASS_3_E1F829200F1611D6_5_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x8D08530)
#define CLASS_3_E1F829200F1611D6_5_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x8D07390)
#define CLASS_3_E1F829200F1611D6_5_METHOD_3_B1FCFA7C1C5829AA_OFFSET UNITYSDK_OFFSET(0x8D072C0)
#define CLASS_3_E1F829200F1611D6_5_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x8D07490)
#define CLASS_3_E1F829200F1611D6_5_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x8D06B80)
#define CLASS_3_E1F829200F1611D6_5_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x8D08840)
#define CLASS_3_E1F829200F1611D6_5__CTOR_OFFSET UNITYSDK_OFFSET(0x8D08520)

inline static constexpr unsigned int Class_3_E1F829200F1611D6_5_TypeDefinitionIndex = 65690;

class Class_3_E1F829200F1611D6_5 : public ::Class_2_0F138252A5783001
{
public:
	::MoleMole::Config::DynamicFloat* Field_3_4; // 0x20
	::MoleMole::Config::DynamicFloat* Field_3_2; // 0x28
	::MoleMole::Config::DynamicFloat* Field_3_0; // 0x30
	::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>* Field_3_7; // 0x38
	::MoleMole::Config::DynamicFloat* Field_3_3; // 0x40
	::MoleMole::Config::DynamicFloat* Field_3_1; // 0x48
	::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>* Field_3_8; // 0x50
	::System::Boolean Field_3_6; // 0x58
	::System::Boolean Field_3_5; // 0x59

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E1F829200F1611D6_5__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*))((::PBYTE)hIl2Cpp + CLASS_3_E1F829200F1611D6_5_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E1F829200F1611D6_5_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B1FCFA7C1C5829AA(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_E1F829200F1611D6_5_METHOD_3_B1FCFA7C1C5829AA_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E1F829200F1611D6_5_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E1F829200F1611D6_5_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E1F829200F1611D6_5_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_E1F829200F1611D6_5* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_E1F829200F1611D6_5*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E1F829200F1611D6_5_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_5EB2504F7A9FE747(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E1F829200F1611D6_5_METHOD_3_5EB2504F7A9FE747_OFFSET))(this, a1, a2);
	}

	static ::Class_3_E1F829200F1611D6_5* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_E1F829200F1611D6_5*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E1F829200F1611D6_5_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*))((::PBYTE)hIl2Cpp + CLASS_3_E1F829200F1611D6_5_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_E1F829200F1611D6_5_METHOD_3_0578713EDB32B89E_OFFSET))(this, a1);
	}
};
