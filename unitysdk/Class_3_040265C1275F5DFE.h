#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D0F9C106E2DD0573.h"
#include "unitysdk/Enum_3_60B60884B6778625.h"
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
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_040265C1275F5DFE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xC52AF30)
#define CLASS_3_040265C1275F5DFE_FROMFLX_OFFSET UNITYSDK_OFFSET(0xC52B710)
#define CLASS_3_040265C1275F5DFE_METHOD_3_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0xC52B790)
#define CLASS_3_040265C1275F5DFE_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0xC52C440)
#define CLASS_3_040265C1275F5DFE_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0xC52C2E0)
#define CLASS_3_040265C1275F5DFE_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0xC52B4E0)
#define CLASS_3_040265C1275F5DFE_METHOD_3_B1ECAEE982D24001_OFFSET UNITYSDK_OFFSET(0xC52AF90)
#define CLASS_3_040265C1275F5DFE_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xC52B5E0)
#define CLASS_3_040265C1275F5DFE_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0xC52C230)
#define CLASS_3_040265C1275F5DFE_METHOD_3_D692029B7700F7B0_OFFSET UNITYSDK_OFFSET(0xC52AE10)
#define CLASS_3_040265C1275F5DFE_METHOD_3_D8A375BA431DF6B3_OFFSET UNITYSDK_OFFSET(0xC52B3F0)
#define CLASS_3_040265C1275F5DFE_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xC52AF20)
#define CLASS_3_040265C1275F5DFE__CTOR_OFFSET UNITYSDK_OFFSET(0xC52C220)

inline static constexpr unsigned int Class_3_040265C1275F5DFE_TypeDefinitionIndex = 36435;

class Class_3_040265C1275F5DFE : public ::Class_2_D0F9C106E2DD0573
{
public:
	::System::String* Field_3_0; // 0x38
	::MoleMole::Config::DynamicFloat* Field_3_4; // 0x40
	::System::String* Field_3_2; // 0x48
	::MoleMole::Config::DynamicFloat* Field_3_5; // 0x50
	::MoleMole::Config::PropertyModifyFunction Field_3_1; // 0x58
	::System::Boolean Field_3_6; // 0x5C
	::Enum_3_60B60884B6778625 Field_3_3; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_040265C1275F5DFE__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D692029B7700F7B0(::Class_3_F41D242A20F8FE06* a1, ::Class_2_D0F9C106E2DD0573* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_D0F9C106E2DD0573*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_040265C1275F5DFE_METHOD_3_D692029B7700F7B0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_040265C1275F5DFE_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_040265C1275F5DFE_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D8A375BA431DF6B3(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_040265C1275F5DFE_METHOD_3_D8A375BA431DF6B3_OFFSET))(this, a1);
	}

	::Class_2_D0F9C106E2DD0573* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_D0F9C106E2DD0573*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_040265C1275F5DFE_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_040265C1275F5DFE_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_040265C1275F5DFE_FROMFLX_OFFSET))(this, a1);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_D0F9C106E2DD0573* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_D0F9C106E2DD0573*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_040265C1275F5DFE_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_B1ECAEE982D24001(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_040265C1275F5DFE_METHOD_3_B1ECAEE982D24001_OFFSET))(this, a1, a2);
	}

	static ::Class_3_040265C1275F5DFE* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_040265C1275F5DFE*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_040265C1275F5DFE_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_040265C1275F5DFE_METHOD_3_0BD393E566CD3D4A_OFFSET))(this, a1);
	}

	static ::Class_3_040265C1275F5DFE* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_040265C1275F5DFE*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_040265C1275F5DFE_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}
};
