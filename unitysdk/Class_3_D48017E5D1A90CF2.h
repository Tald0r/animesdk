#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/Class_2_0F138252A5783001_Enum_3_FD724454F35FC126.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/MonsterStrengthType.h"

class Class_1_061801F5C4991F1A;
class Class_1_236FD73ABC492E3F;
class Class_1_C836D00248E6EFFE;
class Class_1_EF896E1D0FDF202A;
class Class_2_14986121AA61AD99;
class Class_2_4521B631ACA75155;
class Class_2_8CAD669444D1F6DE;
class Class_3_F41D242A20F8FE06;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D48017E5D1A90CF2_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xA3F7D10)
#define CLASS_3_D48017E5D1A90CF2_FROMFLX_OFFSET UNITYSDK_OFFSET(0xA3F8840)
#define CLASS_3_D48017E5D1A90CF2_METHOD_3_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0xA3F88C0)
#define CLASS_3_D48017E5D1A90CF2_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0xA3F9750)
#define CLASS_3_D48017E5D1A90CF2_METHOD_3_40C5968D970A15A2_OFFSET UNITYSDK_OFFSET(0xA3F7AB0)
#define CLASS_3_D48017E5D1A90CF2_METHOD_3_622F9323D55114B2_OFFSET UNITYSDK_OFFSET(0xA3F7D70)
#define CLASS_3_D48017E5D1A90CF2_METHOD_3_8304FB9CA9BAE504_OFFSET UNITYSDK_OFFSET(0xA3F7AC0)
#define CLASS_3_D48017E5D1A90CF2_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0xA3F9990)
#define CLASS_3_D48017E5D1A90CF2_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0xA3F8610)
#define CLASS_3_D48017E5D1A90CF2_METHOD_3_B1FCFA7C1C5829AA_OFFSET UNITYSDK_OFFSET(0xA3F8550)
#define CLASS_3_D48017E5D1A90CF2_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xA3F8710)
#define CLASS_3_D48017E5D1A90CF2_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0xA3F79F0)
#define CLASS_3_D48017E5D1A90CF2_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0xA3F9900)
#define CLASS_3_D48017E5D1A90CF2_METHOD_3_F59BC96F290BB1C3_OFFSET UNITYSDK_OFFSET(0xA3F9980)
#define CLASS_3_D48017E5D1A90CF2__CTOR_OFFSET UNITYSDK_OFFSET(0xA3F9740)

inline static constexpr unsigned int Class_3_D48017E5D1A90CF2_TypeDefinitionIndex = 37479;

class Class_3_D48017E5D1A90CF2 : public ::Class_2_0F138252A5783001
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::MonsterStrengthType>* Field_3_5; // 0x20
	::Il2CppArray<::Class_1_EF896E1D0FDF202A*>* Field_3_1; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_3_6; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* Field_3_7; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_4; // 0x40
	::System::Collections::Generic::List_1<::Class_1_061801F5C4991F1A*>* Field_3_0; // 0x48
	::System::Boolean Field_3_2; // 0x50
	::System::Boolean Field_3_8; // 0x51
	::System::Boolean Field_3_3; // 0x52

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D48017E5D1A90CF2__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*))((::PBYTE)hIl2Cpp + CLASS_3_D48017E5D1A90CF2_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126 Method_3_40C5968D970A15A2()
	{
		return ((::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D48017E5D1A90CF2_METHOD_3_40C5968D970A15A2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>*>* Method_3_8304FB9CA9BAE504()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D48017E5D1A90CF2_METHOD_3_8304FB9CA9BAE504_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D48017E5D1A90CF2_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B1FCFA7C1C5829AA(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_D48017E5D1A90CF2_METHOD_3_B1FCFA7C1C5829AA_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D48017E5D1A90CF2_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D48017E5D1A90CF2_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_D48017E5D1A90CF2_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_D48017E5D1A90CF2_METHOD_3_0578713EDB32B89E_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_622F9323D55114B2(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D48017E5D1A90CF2_METHOD_3_622F9323D55114B2_OFFSET))(this, a1, a2);
	}

	static ::Class_3_D48017E5D1A90CF2* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_D48017E5D1A90CF2*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D48017E5D1A90CF2_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*))((::PBYTE)hIl2Cpp + CLASS_3_D48017E5D1A90CF2_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>*>* Method_3_F59BC96F290BB1C3()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D48017E5D1A90CF2_METHOD_3_F59BC96F290BB1C3_OFFSET))(this);
	}

	static ::Class_3_D48017E5D1A90CF2* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_D48017E5D1A90CF2*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_D48017E5D1A90CF2_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}
};
