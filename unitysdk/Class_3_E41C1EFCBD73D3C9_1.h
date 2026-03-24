#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_1_45265C80F4005604;
class Class_1_C836D00248E6EFFE;
class Class_1_EF896E1D0FDF202A;
class Class_2_14986121AA61AD99;
class Class_2_4521B631ACA75155;
class Class_2_8CAD669444D1F6DE;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_E41C1EFCBD73D3C9_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x9FD0B20)
#define CLASS_3_E41C1EFCBD73D3C9_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x9FD1BC0)
#define CLASS_3_E41C1EFCBD73D3C9_1_METHOD_3_42E9D5DC20A616B8_OFFSET UNITYSDK_OFFSET(0x9FD3C10)
#define CLASS_3_E41C1EFCBD73D3C9_1_METHOD_3_4426A8B0B9C13AC5_OFFSET UNITYSDK_OFFSET(0x9FD0B80)
#define CLASS_3_E41C1EFCBD73D3C9_1_METHOD_3_78C423A2F85760E8_OFFSET UNITYSDK_OFFSET(0x9FD1860)
#define CLASS_3_E41C1EFCBD73D3C9_1_METHOD_3_8B9441BA7064FB02_OFFSET UNITYSDK_OFFSET(0x9FD3A90)
#define CLASS_3_E41C1EFCBD73D3C9_1_METHOD_3_993A24B415B41A1C_OFFSET UNITYSDK_OFFSET(0x9FD1C40)
#define CLASS_3_E41C1EFCBD73D3C9_1_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x9FD1990)
#define CLASS_3_E41C1EFCBD73D3C9_1_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x9FD1A90)
#define CLASS_3_E41C1EFCBD73D3C9_1_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x9FD0A60)
#define CLASS_3_E41C1EFCBD73D3C9_1_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x9FD3B90)
#define CLASS_3_E41C1EFCBD73D3C9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9FD3A30)

inline static constexpr unsigned int Class_3_E41C1EFCBD73D3C9_1_TypeDefinitionIndex = 72751;

class Class_3_E41C1EFCBD73D3C9_1 : public ::Class_2_0F138252A5783001
{
public:
	::MoleMole::Config::DynamicFloat* Field_3_8; // 0x20
	::System::String* Field_3_2; // 0x28
	::MoleMole::Config::ConfigPosRot* Field_3_11; // 0x30
	::Class_1_45265C80F4005604* Field_3_0; // 0x38
	::MoleMole::Config::ConfigPosRot* Field_3_12; // 0x40
	::MoleMole::Config::DynamicFloat* Field_3_9; // 0x48
	::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>* Field_3_14; // 0x50
	::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>* Field_3_16; // 0x58
	::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>* Field_3_17; // 0x60
	::Il2CppArray<::Class_1_EF896E1D0FDF202A*>* Field_3_1; // 0x68
	::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>* Field_3_18; // 0x70
	::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>* Field_3_15; // 0x78
	::System::Int32 Field_3_5; // 0x80
	::System::Int32 Field_3_4; // 0x84
	::UnityEngine::Vector3 Field_3_13; // 0x88
	::System::Int32 Field_3_3; // 0x94
	::System::Int32 Field_3_7; // 0x98
	::System::Boolean Field_3_10; // 0x9C
	::System::Int32 Field_3_6; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_1__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_1_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_78C423A2F85760E8(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_1_METHOD_3_78C423A2F85760E8_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_1_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_1_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_1_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_E41C1EFCBD73D3C9_1* Method_3_8B9441BA7064FB02(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_E41C1EFCBD73D3C9_1*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_1_METHOD_3_8B9441BA7064FB02_OFFSET))(a1);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_1_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_4426A8B0B9C13AC5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_1_METHOD_3_4426A8B0B9C13AC5_OFFSET))(this, a1, a2);
	}

	static ::Class_3_E41C1EFCBD73D3C9_1* Method_3_42E9D5DC20A616B8(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_E41C1EFCBD73D3C9_1*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_1_METHOD_3_42E9D5DC20A616B8_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_993A24B415B41A1C(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_1_METHOD_3_993A24B415B41A1C_OFFSET))(this, a1);
	}
};
