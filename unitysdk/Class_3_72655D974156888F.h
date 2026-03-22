#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D0F9C106E2DD0573.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_8CAD669444D1F6DE;
class Class_3_F41D242A20F8FE06;
namespace MoleMole { class TurnBattleUnitBase; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_72655D974156888F_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x842F560)
#define CLASS_3_72655D974156888F_FROMFLX_OFFSET UNITYSDK_OFFSET(0x842FBA0)
#define CLASS_3_72655D974156888F_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x842FF60)
#define CLASS_3_72655D974156888F_METHOD_3_1537F6489F4148A1_OFFSET UNITYSDK_OFFSET(0x842EE30)
#define CLASS_3_72655D974156888F_METHOD_3_1FAC9B543EF43496_OFFSET UNITYSDK_OFFSET(0x842F5C0)
#define CLASS_3_72655D974156888F_METHOD_3_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x842F900)
#define CLASS_3_72655D974156888F_METHOD_3_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x842FC20)
#define CLASS_3_72655D974156888F_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x8430110)
#define CLASS_3_72655D974156888F_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x842F970)
#define CLASS_3_72655D974156888F_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x842FA70)
#define CLASS_3_72655D974156888F_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x8430270)
#define CLASS_3_72655D974156888F_METHOD_3_DE0D00AD3F4DF468_OFFSET UNITYSDK_OFFSET(0x842F420)
#define CLASS_3_72655D974156888F__CTOR_OFFSET UNITYSDK_OFFSET(0x842FF50)

inline static constexpr unsigned int Class_3_72655D974156888F_TypeDefinitionIndex = 38367;

class Class_3_72655D974156888F : public ::Class_2_D0F9C106E2DD0573
{
public:
	::System::Int32 Field_3_0; // 0x38
	::System::Boolean Field_3_1; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_72655D974156888F__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1537F6489F4148A1(::Class_3_F41D242A20F8FE06* a1, ::Class_2_D0F9C106E2DD0573* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_D0F9C106E2DD0573*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_72655D974156888F_METHOD_3_1537F6489F4148A1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_72655D974156888F_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_72655D974156888F_METHOD_3_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_2_D0F9C106E2DD0573* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_D0F9C106E2DD0573*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_72655D974156888F_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_72655D974156888F_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_72655D974156888F_FROMFLX_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_DE0D00AD3F4DF468(::MoleMole::TurnBattleUnitBase* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::TurnBattleUnitBase*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_72655D974156888F_METHOD_3_DE0D00AD3F4DF468_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_72655D974156888F_METHOD_3_7821D1D4DDDF7E01_OFFSET))(this, a1);
	}

	static ::Class_3_72655D974156888F* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_72655D974156888F*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_72655D974156888F_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	static ::Class_3_72655D974156888F* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_72655D974156888F*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_72655D974156888F_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_1FAC9B543EF43496(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_72655D974156888F_METHOD_3_1FAC9B543EF43496_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_D0F9C106E2DD0573* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_D0F9C106E2DD0573*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_72655D974156888F_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
