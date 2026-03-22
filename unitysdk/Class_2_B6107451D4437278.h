#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EF896E1D0FDF202A.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_8CAD669444D1F6DE;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B6107451D4437278_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xD59CCC0)
#define CLASS_2_B6107451D4437278_FROMFLX_OFFSET UNITYSDK_OFFSET(0xD59D3C0)
#define CLASS_2_B6107451D4437278_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0xD59D800)
#define CLASS_2_B6107451D4437278_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0xD59D0F0)
#define CLASS_2_B6107451D4437278_METHOD_2_6A8EE27FF3BABDB3_OFFSET UNITYSDK_OFFSET(0xD59DB10)
#define CLASS_2_B6107451D4437278_METHOD_2_775C2B47B8DBA768_OFFSET UNITYSDK_OFFSET(0xD59CD20)
#define CLASS_2_B6107451D4437278_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xD59D290)
#define CLASS_2_B6107451D4437278_METHOD_2_D1EF29B9C4396DF3_OFFSET UNITYSDK_OFFSET(0xD59CBA0)
#define CLASS_2_B6107451D4437278_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0xD59D9B0)
#define CLASS_2_B6107451D4437278_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0xD59D190)
#define CLASS_2_B6107451D4437278_METHOD_2_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0xD59D440)
#define CLASS_2_B6107451D4437278__CTOR_OFFSET UNITYSDK_OFFSET(0xD59D7F0)

inline static constexpr unsigned int Class_2_B6107451D4437278_TypeDefinitionIndex = 72652;

class Class_2_B6107451D4437278 : public ::Class_1_EF896E1D0FDF202A
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x38
	::System::Collections::Generic::List_1<::MoleMole::Config::BuffGroupName>* Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6107451D4437278__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_D1EF29B9C4396DF3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_B6107451D4437278_METHOD_2_D1EF29B9C4396DF3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B6107451D4437278_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B6107451D4437278_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_1_EF896E1D0FDF202A* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_EF896E1D0FDF202A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6107451D4437278_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6107451D4437278_METHOD_2_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_B6107451D4437278_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_2_B6107451D4437278* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_B6107451D4437278*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B6107451D4437278_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_775C2B47B8DBA768(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B6107451D4437278_METHOD_2_775C2B47B8DBA768_OFFSET))(this, a1, a2);
	}

	static ::Class_2_B6107451D4437278* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_B6107451D4437278*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_B6107451D4437278_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_B6107451D4437278_METHOD_2_DF413489329CBAF8_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6A8EE27FF3BABDB3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_B6107451D4437278_METHOD_2_6A8EE27FF3BABDB3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
