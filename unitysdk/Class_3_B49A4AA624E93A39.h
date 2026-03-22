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
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_B49A4AA624E93A39_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x6C788A0)
#define CLASS_3_B49A4AA624E93A39_FROMFLX_OFFSET UNITYSDK_OFFSET(0x6C791B0)
#define CLASS_3_B49A4AA624E93A39_METHOD_3_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x6C79230)
#define CLASS_3_B49A4AA624E93A39_METHOD_3_1089C680E09499BD_OFFSET UNITYSDK_OFFSET(0x6C78900)
#define CLASS_3_B49A4AA624E93A39_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x6C79B70)
#define CLASS_3_B49A4AA624E93A39_METHOD_3_36AE5FB89AA48E59_OFFSET UNITYSDK_OFFSET(0x6C78780)
#define CLASS_3_B49A4AA624E93A39_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x6C79D20)
#define CLASS_3_B49A4AA624E93A39_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x6C78F80)
#define CLASS_3_B49A4AA624E93A39_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x6C79080)
#define CLASS_3_B49A4AA624E93A39_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x6C79E80)
#define CLASS_3_B49A4AA624E93A39_METHOD_3_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x6C78EC0)
#define CLASS_3_B49A4AA624E93A39__CTOR_OFFSET UNITYSDK_OFFSET(0x6C79B20)

inline static constexpr unsigned int Class_3_B49A4AA624E93A39_TypeDefinitionIndex = 42183;

class Class_3_B49A4AA624E93A39 : public ::Class_2_D0F9C106E2DD0573
{
public:
	::MoleMole::Config::DynamicString* Field_3_3; // 0x38
	::MoleMole::Config::DynamicInt* Field_3_5; // 0x40
	::System::Int32 Field_3_1; // 0x48
	::System::Int32 Field_3_0; // 0x4C
	::System::Boolean Field_3_2; // 0x50
	::System::Boolean Field_3_4; // 0x51

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B49A4AA624E93A39__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_36AE5FB89AA48E59(::Class_3_F41D242A20F8FE06* a1, ::Class_2_D0F9C106E2DD0573* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_D0F9C106E2DD0573*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_B49A4AA624E93A39_METHOD_3_36AE5FB89AA48E59_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B49A4AA624E93A39_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_B49A4AA624E93A39_METHOD_3_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_2_D0F9C106E2DD0573* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_D0F9C106E2DD0573*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B49A4AA624E93A39_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B49A4AA624E93A39_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_B49A4AA624E93A39_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_B49A4AA624E93A39* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_B49A4AA624E93A39*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B49A4AA624E93A39_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	static ::Class_3_B49A4AA624E93A39* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_B49A4AA624E93A39*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_B49A4AA624E93A39_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_1089C680E09499BD(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B49A4AA624E93A39_METHOD_3_1089C680E09499BD_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_B49A4AA624E93A39_METHOD_3_00531776927FE5B6_OFFSET))(this, a1);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_D0F9C106E2DD0573* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_D0F9C106E2DD0573*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_B49A4AA624E93A39_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
