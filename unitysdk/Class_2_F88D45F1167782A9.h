#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EF896E1D0FDF202A.h"
#include "unitysdk/Enum_3_5D7848B90BAD9ACC.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_8CAD669444D1F6DE;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_F88D45F1167782A9_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x6429350)
#define CLASS_2_F88D45F1167782A9_FROMFLX_OFFSET UNITYSDK_OFFSET(0x6429A20)
#define CLASS_2_F88D45F1167782A9_METHOD_2_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x6429AA0)
#define CLASS_2_F88D45F1167782A9_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x642A460)
#define CLASS_2_F88D45F1167782A9_METHOD_2_4ECA99273B8D9FC8_OFFSET UNITYSDK_OFFSET(0x64293B0)
#define CLASS_2_F88D45F1167782A9_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x6429760)
#define CLASS_2_F88D45F1167782A9_METHOD_2_6A8EE27FF3BABDB3_OFFSET UNITYSDK_OFFSET(0x642A260)
#define CLASS_2_F88D45F1167782A9_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x64298F0)
#define CLASS_2_F88D45F1167782A9_METHOD_2_D1EF29B9C4396DF3_OFFSET UNITYSDK_OFFSET(0x6429230)
#define CLASS_2_F88D45F1167782A9_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x642A300)
#define CLASS_2_F88D45F1167782A9_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x64297F0)
#define CLASS_2_F88D45F1167782A9__CTOR_OFFSET UNITYSDK_OFFSET(0x642A250)

inline static constexpr unsigned int Class_2_F88D45F1167782A9_TypeDefinitionIndex = 47407;

class Class_2_F88D45F1167782A9 : public ::Class_1_EF896E1D0FDF202A
{
public:
	::MoleMole::Config::DynamicFloat* Field_2_3; // 0x38
	::MoleMole::Config::DamageElementType Field_2_1; // 0x40
	::MoleMole::Config::EVariantElement Field_2_5; // 0x44
	::System::Boolean Field_2_2; // 0x48
	::MoleMole::Config::ValueCompareType Field_2_4; // 0x4C
	::Enum_3_5D7848B90BAD9ACC Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F88D45F1167782A9__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_D1EF29B9C4396DF3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_F88D45F1167782A9_METHOD_2_D1EF29B9C4396DF3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F88D45F1167782A9_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_F88D45F1167782A9_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_1_EF896E1D0FDF202A* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_EF896E1D0FDF202A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F88D45F1167782A9_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F88D45F1167782A9_METHOD_2_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_F88D45F1167782A9_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6A8EE27FF3BABDB3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_F88D45F1167782A9_METHOD_2_6A8EE27FF3BABDB3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::Class_2_F88D45F1167782A9* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_F88D45F1167782A9*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_F88D45F1167782A9_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	static ::Class_2_F88D45F1167782A9* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_F88D45F1167782A9*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F88D45F1167782A9_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_F88D45F1167782A9_METHOD_2_00531776927FE5B6_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4ECA99273B8D9FC8(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F88D45F1167782A9_METHOD_2_4ECA99273B8D9FC8_OFFSET))(this, a1, a2);
	}
};
