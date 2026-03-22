#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D0F9C106E2DD0573.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"

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

#define CLASS_3_47D9A7AD4A7321DB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xA713940)
#define CLASS_3_47D9A7AD4A7321DB_FROMFLX_OFFSET UNITYSDK_OFFSET(0xA7140F0)
#define CLASS_3_47D9A7AD4A7321DB_METHOD_3_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0xA714170)
#define CLASS_3_47D9A7AD4A7321DB_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0xA714AF0)
#define CLASS_3_47D9A7AD4A7321DB_METHOD_3_529A9CA1CFAF7016_OFFSET UNITYSDK_OFFSET(0xA7139A0)
#define CLASS_3_47D9A7AD4A7321DB_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0xA714CA0)
#define CLASS_3_47D9A7AD4A7321DB_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0xA713EC0)
#define CLASS_3_47D9A7AD4A7321DB_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xA713FC0)
#define CLASS_3_47D9A7AD4A7321DB_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0xA714E00)
#define CLASS_3_47D9A7AD4A7321DB_METHOD_3_D692029B7700F7B0_OFFSET UNITYSDK_OFFSET(0xA713830)
#define CLASS_3_47D9A7AD4A7321DB_METHOD_3_D8A375BA431DF6B3_OFFSET UNITYSDK_OFFSET(0xA713DD0)
#define CLASS_3_47D9A7AD4A7321DB__CTOR_OFFSET UNITYSDK_OFFSET(0xA714AE0)

inline static constexpr unsigned int Class_3_47D9A7AD4A7321DB_TypeDefinitionIndex = 78111;

class Class_3_47D9A7AD4A7321DB : public ::Class_2_D0F9C106E2DD0573
{
public:
	::MoleMole::Config::DynamicFloat* Field_3_3; // 0x38
	::MoleMole::Config::DynamicInt* Field_3_0; // 0x40
	::MoleMole::Config::DynamicFloat* Field_3_4; // 0x48
	::System::String* Field_3_1; // 0x50
	::MoleMole::Config::PropertyModifyFunction Field_3_2; // 0x58
	::System::Boolean Field_3_5; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47D9A7AD4A7321DB__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D692029B7700F7B0(::Class_3_F41D242A20F8FE06* a1, ::Class_2_D0F9C106E2DD0573* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_D0F9C106E2DD0573*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_47D9A7AD4A7321DB_METHOD_3_D692029B7700F7B0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_47D9A7AD4A7321DB_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D8A375BA431DF6B3(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_47D9A7AD4A7321DB_METHOD_3_D8A375BA431DF6B3_OFFSET))(this, a1);
	}

	::Class_2_D0F9C106E2DD0573* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_D0F9C106E2DD0573*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47D9A7AD4A7321DB_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47D9A7AD4A7321DB_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_47D9A7AD4A7321DB_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_47D9A7AD4A7321DB* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_47D9A7AD4A7321DB*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_47D9A7AD4A7321DB_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	static ::Class_3_47D9A7AD4A7321DB* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_47D9A7AD4A7321DB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_47D9A7AD4A7321DB_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_47D9A7AD4A7321DB_METHOD_3_0BD393E566CD3D4A_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_529A9CA1CFAF7016(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_47D9A7AD4A7321DB_METHOD_3_529A9CA1CFAF7016_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_D0F9C106E2DD0573* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_D0F9C106E2DD0573*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_47D9A7AD4A7321DB_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
