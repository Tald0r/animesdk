#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EF896E1D0FDF202A.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_8CAD669444D1F6DE;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_A5D01ECA50B84519_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x607D100)
#define CLASS_2_A5D01ECA50B84519_FROMFLX_OFFSET UNITYSDK_OFFSET(0x607D680)
#define CLASS_2_A5D01ECA50B84519_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x607DBC0)
#define CLASS_2_A5D01ECA50B84519_METHOD_2_6A8EE27FF3BABDB3_OFFSET UNITYSDK_OFFSET(0x607DED0)
#define CLASS_2_A5D01ECA50B84519_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x607D700)
#define CLASS_2_A5D01ECA50B84519_METHOD_2_90E3507D841C1CB4_OFFSET UNITYSDK_OFFSET(0x607D160)
#define CLASS_2_A5D01ECA50B84519_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x607D550)
#define CLASS_2_A5D01ECA50B84519_METHOD_2_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x607D3B0)
#define CLASS_2_A5D01ECA50B84519_METHOD_2_D1EF29B9C4396DF3_OFFSET UNITYSDK_OFFSET(0x607CFE0)
#define CLASS_2_A5D01ECA50B84519_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x607DD70)
#define CLASS_2_A5D01ECA50B84519_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x607D450)
#define CLASS_2_A5D01ECA50B84519__CTOR_OFFSET UNITYSDK_OFFSET(0x607DB80)

inline static constexpr unsigned int Class_2_A5D01ECA50B84519_TypeDefinitionIndex = 38379;

class Class_2_A5D01ECA50B84519 : public ::Class_1_EF896E1D0FDF202A
{
public:
	::System::String* Field_2_1; // 0x38
	::MoleMole::Config::DynamicFloat* Field_2_2; // 0x40
	::MoleMole::Config::ValueCompareType Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5D01ECA50B84519__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_D1EF29B9C4396DF3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_A5D01ECA50B84519_METHOD_2_D1EF29B9C4396DF3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A5D01ECA50B84519_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_A5D01ECA50B84519_METHOD_2_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_1_EF896E1D0FDF202A* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_EF896E1D0FDF202A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5D01ECA50B84519_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5D01ECA50B84519_METHOD_2_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_A5D01ECA50B84519_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_A5D01ECA50B84519_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_90E3507D841C1CB4(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A5D01ECA50B84519_METHOD_2_90E3507D841C1CB4_OFFSET))(this, a1, a2);
	}

	static ::Class_2_A5D01ECA50B84519* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_A5D01ECA50B84519*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A5D01ECA50B84519_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	static ::Class_2_A5D01ECA50B84519* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_A5D01ECA50B84519*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_A5D01ECA50B84519_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_6A8EE27FF3BABDB3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_A5D01ECA50B84519_METHOD_2_6A8EE27FF3BABDB3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
