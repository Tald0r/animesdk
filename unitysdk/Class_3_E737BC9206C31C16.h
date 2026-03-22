#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D0F9C106E2DD0573.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"

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

#define CLASS_3_E737BC9206C31C16_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x88BC6F0)
#define CLASS_3_E737BC9206C31C16_FROMFLX_OFFSET UNITYSDK_OFFSET(0xD078B70)
#define CLASS_3_E737BC9206C31C16_METHOD_3_0CB3D614A4DB34A1_OFFSET UNITYSDK_OFFSET(0xD078BF0)
#define CLASS_3_E737BC9206C31C16_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0xD0797B0)
#define CLASS_3_E737BC9206C31C16_METHOD_3_862B6EF8AE48F6D1_OFFSET UNITYSDK_OFFSET(0x88BC5C0)
#define CLASS_3_E737BC9206C31C16_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0xD079650)
#define CLASS_3_E737BC9206C31C16_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0xD078940)
#define CLASS_3_E737BC9206C31C16_METHOD_3_B1ECAEE982D24001_OFFSET UNITYSDK_OFFSET(0xD079960)
#define CLASS_3_E737BC9206C31C16_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xD078A40)
#define CLASS_3_E737BC9206C31C16_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0xD079E30)
#define CLASS_3_E737BC9206C31C16_METHOD_3_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x88BC750)
#define CLASS_3_E737BC9206C31C16_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x88BC6E0)
#define CLASS_3_E737BC9206C31C16__CTOR_OFFSET UNITYSDK_OFFSET(0xD079640)

inline static constexpr unsigned int Class_3_E737BC9206C31C16_TypeDefinitionIndex = 39168;

class Class_3_E737BC9206C31C16 : public ::Class_2_D0F9C106E2DD0573
{
public:
	::MoleMole::Config::DynamicFloat* Field_3_2; // 0x38
	::System::String* Field_3_5; // 0x40
	::MoleMole::Config::DynamicFloat* Field_3_1; // 0x48
	::MoleMole::Config::AbilityTargetting Field_3_4; // 0x50
	::MoleMole::Config::PropertyModifyFunction Field_3_0; // 0x54
	::System::Boolean Field_3_3; // 0x58
	::System::Boolean Field_3_6; // 0x59

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E737BC9206C31C16__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_862B6EF8AE48F6D1(::Class_3_F41D242A20F8FE06* a1, ::Class_2_D0F9C106E2DD0573* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_D0F9C106E2DD0573*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_E737BC9206C31C16_METHOD_3_862B6EF8AE48F6D1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E737BC9206C31C16_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E737BC9206C31C16_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_E737BC9206C31C16_METHOD_3_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_2_D0F9C106E2DD0573* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_D0F9C106E2DD0573*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E737BC9206C31C16_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E737BC9206C31C16_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E737BC9206C31C16_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_E737BC9206C31C16* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_E737BC9206C31C16*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E737BC9206C31C16_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_0CB3D614A4DB34A1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_E737BC9206C31C16_METHOD_3_0CB3D614A4DB34A1_OFFSET))(this, a1);
	}

	static ::Class_3_E737BC9206C31C16* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_E737BC9206C31C16*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E737BC9206C31C16_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_B1ECAEE982D24001(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E737BC9206C31C16_METHOD_3_B1ECAEE982D24001_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_D0F9C106E2DD0573* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_D0F9C106E2DD0573*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_E737BC9206C31C16_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
