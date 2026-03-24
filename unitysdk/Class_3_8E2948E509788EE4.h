#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4521B631ACA75155.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_8CAD669444D1F6DE;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_8E2948E509788EE4_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x96ACFB0)
#define CLASS_3_8E2948E509788EE4_FROMFLX_OFFSET UNITYSDK_OFFSET(0x96ADF50)
#define CLASS_3_8E2948E509788EE4_METHOD_3_095C9AE13EDFAA92_OFFSET UNITYSDK_OFFSET(0x96AC740)
#define CLASS_3_8E2948E509788EE4_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x96AFDA0)
#define CLASS_3_8E2948E509788EE4_METHOD_3_82A3EC7819F9DAA7_OFFSET UNITYSDK_OFFSET(0x96ADFD0)
#define CLASS_3_8E2948E509788EE4_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x96B0000)
#define CLASS_3_8E2948E509788EE4_METHOD_3_9E676667B518C656_OFFSET UNITYSDK_OFFSET(0x96ADBE0)
#define CLASS_3_8E2948E509788EE4_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x96ADD20)
#define CLASS_3_8E2948E509788EE4_METHOD_3_B2AF4C431D25B230_OFFSET UNITYSDK_OFFSET(0x96AD010)
#define CLASS_3_8E2948E509788EE4_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x96ADE20)
#define CLASS_3_8E2948E509788EE4_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x96AFF50)
#define CLASS_3_8E2948E509788EE4__CTOR_OFFSET UNITYSDK_OFFSET(0x96AFD80)

inline static constexpr unsigned int Class_3_8E2948E509788EE4_TypeDefinitionIndex = 73339;

class Class_3_8E2948E509788EE4 : public ::Class_2_4521B631ACA75155
{
public:
	::MoleMole::Config::DynamicFloat* Field_3_14; // 0x38
	::MoleMole::Config::DynamicFloat* Field_3_11; // 0x40
	::MoleMole::Config::DynamicInt* Field_3_12; // 0x48
	::MoleMole::Config::DynamicFloat* Field_3_13; // 0x50
	::MoleMole::Config::DynamicInt* Field_3_8; // 0x58
	::MoleMole::Config::DynamicFloat* Field_3_10; // 0x60
	::System::String* Field_3_15; // 0x68
	::MoleMole::Config::DynamicFloat* Field_3_9; // 0x70
	::MoleMole::Config::EnterBattleState Field_3_16; // 0x78
	::System::Boolean Field_3_5; // 0x7C
	::System::Boolean Field_3_17; // 0x7D
	::System::Boolean Field_3_1; // 0x7E
	::System::Boolean Field_3_6; // 0x7F
	::System::Boolean Field_3_18; // 0x80
	::System::Boolean Field_3_7; // 0x81
	::System::Boolean Field_3_2; // 0x82
	::System::Boolean Field_3_20; // 0x83
	::System::Boolean Field_3_4; // 0x84
	::System::Boolean Field_3_0; // 0x85
	::System::Boolean Field_3_19; // 0x86
	::System::Boolean Field_3_3; // 0x87

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E2948E509788EE4__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_095C9AE13EDFAA92(::Class_3_F41D242A20F8FE06* a1, ::Class_2_4521B631ACA75155* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_4521B631ACA75155*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_8E2948E509788EE4_METHOD_3_095C9AE13EDFAA92_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8E2948E509788EE4_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9E676667B518C656(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_8E2948E509788EE4_METHOD_3_9E676667B518C656_OFFSET))(this, a1);
	}

	::Class_2_4521B631ACA75155* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_4521B631ACA75155*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E2948E509788EE4_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E2948E509788EE4_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_8E2948E509788EE4_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_8E2948E509788EE4* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_8E2948E509788EE4*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8E2948E509788EE4_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_82A3EC7819F9DAA7(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_8E2948E509788EE4_METHOD_3_82A3EC7819F9DAA7_OFFSET))(this, a1);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_4521B631ACA75155* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_4521B631ACA75155*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_8E2948E509788EE4_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Class_3_8E2948E509788EE4* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_8E2948E509788EE4*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_8E2948E509788EE4_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_B2AF4C431D25B230(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8E2948E509788EE4_METHOD_3_B2AF4C431D25B230_OFFSET))(this, a1, a2);
	}
};
