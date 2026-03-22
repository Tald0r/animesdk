#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D0F9C106E2DD0573.h"
#include "unitysdk/Enum_3_ED615915CA3CD64F.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_8CAD669444D1F6DE;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_5A5E57D7EF422836_2_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x69930F0)
#define CLASS_3_5A5E57D7EF422836_2_FROMFLX_OFFSET UNITYSDK_OFFSET(0x6993640)
#define CLASS_3_5A5E57D7EF422836_2_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x6993C00)
#define CLASS_3_5A5E57D7EF422836_2_METHOD_3_2544D774F2F3A291_OFFSET UNITYSDK_OFFSET(0x6993150)
#define CLASS_3_5A5E57D7EF422836_2_METHOD_3_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x6993370)
#define CLASS_3_5A5E57D7EF422836_2_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x6993AA0)
#define CLASS_3_5A5E57D7EF422836_2_METHOD_3_A2AB40CA531F9B5C_OFFSET UNITYSDK_OFFSET(0x69936C0)
#define CLASS_3_5A5E57D7EF422836_2_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x6993410)
#define CLASS_3_5A5E57D7EF422836_2_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x6993510)
#define CLASS_3_5A5E57D7EF422836_2_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x6993DB0)
#define CLASS_3_5A5E57D7EF422836_2_METHOD_3_D43D553A8EE4CBFF_OFFSET UNITYSDK_OFFSET(0x6992FE0)
#define CLASS_3_5A5E57D7EF422836_2__CTOR_OFFSET UNITYSDK_OFFSET(0x6993A90)

inline static constexpr unsigned int Class_3_5A5E57D7EF422836_2_TypeDefinitionIndex = 58527;

class Class_3_5A5E57D7EF422836_2 : public ::Class_2_D0F9C106E2DD0573
{
public:
	::MoleMole::Config::DynamicString* Field_3_1; // 0x38
	::Enum_3_ED615915CA3CD64F Field_3_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A5E57D7EF422836_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D43D553A8EE4CBFF(::Class_3_F41D242A20F8FE06* a1, ::Class_2_D0F9C106E2DD0573* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_D0F9C106E2DD0573*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_5A5E57D7EF422836_2_METHOD_3_D43D553A8EE4CBFF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5A5E57D7EF422836_2_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_5A5E57D7EF422836_2_METHOD_3_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_2_D0F9C106E2DD0573* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_D0F9C106E2DD0573*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A5E57D7EF422836_2_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A5E57D7EF422836_2_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_5A5E57D7EF422836_2_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_5A5E57D7EF422836_2* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_5A5E57D7EF422836_2*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_5A5E57D7EF422836_2_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	static ::Class_3_5A5E57D7EF422836_2* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_5A5E57D7EF422836_2*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5A5E57D7EF422836_2_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_2544D774F2F3A291(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5A5E57D7EF422836_2_METHOD_3_2544D774F2F3A291_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_D0F9C106E2DD0573* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_D0F9C106E2DD0573*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_5A5E57D7EF422836_2_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_A2AB40CA531F9B5C(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_5A5E57D7EF422836_2_METHOD_3_A2AB40CA531F9B5C_OFFSET))(this, a1);
	}
};
