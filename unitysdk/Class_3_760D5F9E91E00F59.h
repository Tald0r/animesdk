#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D0F9C106E2DD0573.h"
#include "unitysdk/Enum_3_0C64DF8AF706EDE4.h"
#include "unitysdk/Enum_3_69E704384979AD28.h"
#include "unitysdk/Enum_3_84ED1BE6947BE914.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_8CAD669444D1F6DE;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_760D5F9E91E00F59_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xAAE8E60)
#define CLASS_3_760D5F9E91E00F59_FROMFLX_OFFSET UNITYSDK_OFFSET(0xAAE9590)
#define CLASS_3_760D5F9E91E00F59_METHOD_3_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0xAAE9610)
#define CLASS_3_760D5F9E91E00F59_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0xAAE9EE0)
#define CLASS_3_760D5F9E91E00F59_METHOD_3_6A6D1ECB93526332_OFFSET UNITYSDK_OFFSET(0xAAE8EC0)
#define CLASS_3_760D5F9E91E00F59_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0xAAEA140)
#define CLASS_3_760D5F9E91E00F59_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0xAAE9360)
#define CLASS_3_760D5F9E91E00F59_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xAAE9460)
#define CLASS_3_760D5F9E91E00F59_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0xAAEA090)
#define CLASS_3_760D5F9E91E00F59_METHOD_3_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0xAAE92A0)
#define CLASS_3_760D5F9E91E00F59_METHOD_3_D43D553A8EE4CBFF_OFFSET UNITYSDK_OFFSET(0xAAE8D50)
#define CLASS_3_760D5F9E91E00F59__CTOR_OFFSET UNITYSDK_OFFSET(0xAAE9ED0)

inline static constexpr unsigned int Class_3_760D5F9E91E00F59_TypeDefinitionIndex = 77089;

class Class_3_760D5F9E91E00F59 : public ::Class_2_D0F9C106E2DD0573
{
public:
	::MoleMole::Config::DynamicFloat* Field_3_4; // 0x38
	::MoleMole::Config::DynamicFloat* Field_3_3; // 0x40
	::System::Boolean Field_3_0; // 0x48
	::Enum_3_69E704384979AD28 Field_3_2; // 0x4C
	::Enum_3_84ED1BE6947BE914 Field_3_1; // 0x50
	::Enum_3_0C64DF8AF706EDE4 Field_3_5; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_760D5F9E91E00F59__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D43D553A8EE4CBFF(::Class_3_F41D242A20F8FE06* a1, ::Class_2_D0F9C106E2DD0573* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_D0F9C106E2DD0573*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_760D5F9E91E00F59_METHOD_3_D43D553A8EE4CBFF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_760D5F9E91E00F59_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_760D5F9E91E00F59_METHOD_3_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_2_D0F9C106E2DD0573* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_D0F9C106E2DD0573*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_760D5F9E91E00F59_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_760D5F9E91E00F59_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_760D5F9E91E00F59_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_760D5F9E91E00F59* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_760D5F9E91E00F59*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_760D5F9E91E00F59_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_760D5F9E91E00F59_METHOD_3_00531776927FE5B6_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_6A6D1ECB93526332(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_760D5F9E91E00F59_METHOD_3_6A6D1ECB93526332_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_D0F9C106E2DD0573* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_D0F9C106E2DD0573*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_760D5F9E91E00F59_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Class_3_760D5F9E91E00F59* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_760D5F9E91E00F59*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_760D5F9E91E00F59_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}
};
