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
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_EC544FB02346FAC2_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x6FF6820)
#define CLASS_3_EC544FB02346FAC2_FROMFLX_OFFSET UNITYSDK_OFFSET(0x6FF70D0)
#define CLASS_3_EC544FB02346FAC2_METHOD_3_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x6FF7150)
#define CLASS_3_EC544FB02346FAC2_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x6FF8080)
#define CLASS_3_EC544FB02346FAC2_METHOD_3_7601A481DC41203C_OFFSET UNITYSDK_OFFSET(0x6FF6670)
#define CLASS_3_EC544FB02346FAC2_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x6FF8230)
#define CLASS_3_EC544FB02346FAC2_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x6FF6EA0)
#define CLASS_3_EC544FB02346FAC2_METHOD_3_B1FCFA7C1C5829AA_OFFSET UNITYSDK_OFFSET(0x6FF6DA0)
#define CLASS_3_EC544FB02346FAC2_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x6FF6FA0)
#define CLASS_3_EC544FB02346FAC2_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x6FF7FD0)
#define CLASS_3_EC544FB02346FAC2_METHOD_3_DCC1A04AAD39A4D8_OFFSET UNITYSDK_OFFSET(0x6FF6880)
#define CLASS_3_EC544FB02346FAC2_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x6FF6810)
#define CLASS_3_EC544FB02346FAC2__CTOR_OFFSET UNITYSDK_OFFSET(0x6FF7FC0)

inline static constexpr unsigned int Class_3_EC544FB02346FAC2_TypeDefinitionIndex = 43031;

class Class_3_EC544FB02346FAC2 : public ::Class_2_D0F9C106E2DD0573
{
public:
	::MoleMole::Config::DynamicFloat* Field_3_4; // 0x38
	::MoleMole::Config::DynamicFloat* Field_3_3; // 0x40
	::System::String* Field_3_0; // 0x48
	::System::String* Field_3_1; // 0x50
	::MoleMole::Config::DynamicInt* Field_3_2; // 0x58
	::System::Boolean Field_3_5; // 0x60
	::System::Boolean Field_3_6; // 0x61
	::System::Boolean Field_3_7; // 0x62
	::System::Boolean Field_3_8; // 0x63

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC544FB02346FAC2__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_7601A481DC41203C(::Class_3_F41D242A20F8FE06* a1, ::Class_2_D0F9C106E2DD0573* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_D0F9C106E2DD0573*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_EC544FB02346FAC2_METHOD_3_7601A481DC41203C_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC544FB02346FAC2_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_EC544FB02346FAC2_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B1FCFA7C1C5829AA(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_EC544FB02346FAC2_METHOD_3_B1FCFA7C1C5829AA_OFFSET))(this, a1);
	}

	::Class_2_D0F9C106E2DD0573* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_D0F9C106E2DD0573*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC544FB02346FAC2_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC544FB02346FAC2_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_EC544FB02346FAC2_FROMFLX_OFFSET))(this, a1);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_D0F9C106E2DD0573* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_D0F9C106E2DD0573*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_EC544FB02346FAC2_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Class_3_EC544FB02346FAC2* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_EC544FB02346FAC2*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_EC544FB02346FAC2_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_DCC1A04AAD39A4D8(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_EC544FB02346FAC2_METHOD_3_DCC1A04AAD39A4D8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_EC544FB02346FAC2_METHOD_3_0BD393E566CD3D4A_OFFSET))(this, a1);
	}

	static ::Class_3_EC544FB02346FAC2* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_EC544FB02346FAC2*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_EC544FB02346FAC2_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}
};
