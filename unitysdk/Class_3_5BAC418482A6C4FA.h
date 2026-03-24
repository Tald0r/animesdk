#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4521B631ACA75155.h"
#include "unitysdk/Enum_3_3944782C20CE600E.h"
#include "unitysdk/Enum_3_9937D861CD319B04.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_8CAD669444D1F6DE;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_5BAC418482A6C4FA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x73D8720)
#define CLASS_3_5BAC418482A6C4FA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x73D8F90)
#define CLASS_3_5BAC418482A6C4FA_METHOD_3_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x73D9010)
#define CLASS_3_5BAC418482A6C4FA_METHOD_3_0C4C7EA97DC34E39_OFFSET UNITYSDK_OFFSET(0x73D8780)
#define CLASS_3_5BAC418482A6C4FA_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x73DA080)
#define CLASS_3_5BAC418482A6C4FA_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x73DA2E0)
#define CLASS_3_5BAC418482A6C4FA_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x73D8D60)
#define CLASS_3_5BAC418482A6C4FA_METHOD_3_B1FCFA7C1C5829AA_OFFSET UNITYSDK_OFFSET(0x73D8C60)
#define CLASS_3_5BAC418482A6C4FA_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x73D8E60)
#define CLASS_3_5BAC418482A6C4FA_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x73DA230)
#define CLASS_3_5BAC418482A6C4FA_METHOD_3_D692029B7700F7B0_OFFSET UNITYSDK_OFFSET(0x73D8600)
#define CLASS_3_5BAC418482A6C4FA_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x73D8710)
#define CLASS_3_5BAC418482A6C4FA__CTOR_OFFSET UNITYSDK_OFFSET(0x73DA070)

inline static constexpr unsigned int Class_3_5BAC418482A6C4FA_TypeDefinitionIndex = 39649;

class Class_3_5BAC418482A6C4FA : public ::Class_2_4521B631ACA75155
{
public:
	::System::String* Field_3_6; // 0x38
	::MoleMole::Config::ConfigPosRot* Field_3_4; // 0x40
	::System::String* Field_3_3; // 0x48
	::System::String* Field_3_8; // 0x50
	::System::String* Field_3_1; // 0x58
	::System::Boolean Field_3_9; // 0x60
	::Enum_3_3944782C20CE600E Field_3_0; // 0x64
	::MoleMole::Config::AbilityTargetting Field_3_5; // 0x68
	::MoleMole::Config::AbilityTargetting Field_3_7; // 0x6C
	::Enum_3_9937D861CD319B04 Field_3_2; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5BAC418482A6C4FA__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D692029B7700F7B0(::Class_3_F41D242A20F8FE06* a1, ::Class_2_4521B631ACA75155* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_4521B631ACA75155*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_5BAC418482A6C4FA_METHOD_3_D692029B7700F7B0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5BAC418482A6C4FA_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5BAC418482A6C4FA_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B1FCFA7C1C5829AA(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_5BAC418482A6C4FA_METHOD_3_B1FCFA7C1C5829AA_OFFSET))(this, a1);
	}

	::Class_2_4521B631ACA75155* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_4521B631ACA75155*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5BAC418482A6C4FA_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5BAC418482A6C4FA_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_5BAC418482A6C4FA_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_5BAC418482A6C4FA* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_5BAC418482A6C4FA*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5BAC418482A6C4FA_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_4521B631ACA75155* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_4521B631ACA75155*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_5BAC418482A6C4FA_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Class_3_5BAC418482A6C4FA* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_5BAC418482A6C4FA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_5BAC418482A6C4FA_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_5BAC418482A6C4FA_METHOD_3_0578713EDB32B89E_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_0C4C7EA97DC34E39(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5BAC418482A6C4FA_METHOD_3_0C4C7EA97DC34E39_OFFSET))(this, a1, a2);
	}
};
