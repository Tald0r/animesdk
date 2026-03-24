#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4521B631ACA75155.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"

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

#define CLASS_3_7FFC8EE821C8D261_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x69A8D10)
#define CLASS_3_7FFC8EE821C8D261_FROMFLX_OFFSET UNITYSDK_OFFSET(0x69A9360)
#define CLASS_3_7FFC8EE821C8D261_METHOD_3_0CB3D614A4DB34A1_OFFSET UNITYSDK_OFFSET(0x69A93E0)
#define CLASS_3_7FFC8EE821C8D261_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x69A9BA0)
#define CLASS_3_7FFC8EE821C8D261_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x69A9A40)
#define CLASS_3_7FFC8EE821C8D261_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x69A9130)
#define CLASS_3_7FFC8EE821C8D261_METHOD_3_B31CACFA28ED8877_OFFSET UNITYSDK_OFFSET(0x69A8BE0)
#define CLASS_3_7FFC8EE821C8D261_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x69A9230)
#define CLASS_3_7FFC8EE821C8D261_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x69A9D50)
#define CLASS_3_7FFC8EE821C8D261_METHOD_3_D8A375BA431DF6B3_OFFSET UNITYSDK_OFFSET(0x69A9060)
#define CLASS_3_7FFC8EE821C8D261_METHOD_3_DDBE9A358A92FDCB_OFFSET UNITYSDK_OFFSET(0x69A8D70)
#define CLASS_3_7FFC8EE821C8D261_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x69A8D00)
#define CLASS_3_7FFC8EE821C8D261__CTOR_OFFSET UNITYSDK_OFFSET(0x69A9A30)

inline static constexpr unsigned int Class_3_7FFC8EE821C8D261_TypeDefinitionIndex = 47417;

class Class_3_7FFC8EE821C8D261 : public ::Class_2_4521B631ACA75155
{
public:
	::MoleMole::Config::DynamicFloat* Field_3_1; // 0x38
	::MoleMole::Config::DynamicFloat* Field_3_0; // 0x40
	::System::String* Field_3_3; // 0x48
	::MoleMole::Config::AbilityTargetting Field_3_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7FFC8EE821C8D261__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_B31CACFA28ED8877(::Class_3_F41D242A20F8FE06* a1, ::Class_2_4521B631ACA75155* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_4521B631ACA75155*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_7FFC8EE821C8D261_METHOD_3_B31CACFA28ED8877_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7FFC8EE821C8D261_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7FFC8EE821C8D261_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D8A375BA431DF6B3(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_7FFC8EE821C8D261_METHOD_3_D8A375BA431DF6B3_OFFSET))(this, a1);
	}

	::Class_2_4521B631ACA75155* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_4521B631ACA75155*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7FFC8EE821C8D261_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7FFC8EE821C8D261_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_7FFC8EE821C8D261_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_7FFC8EE821C8D261* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_7FFC8EE821C8D261*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_7FFC8EE821C8D261_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	static ::Class_3_7FFC8EE821C8D261* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_7FFC8EE821C8D261*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7FFC8EE821C8D261_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_0CB3D614A4DB34A1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_7FFC8EE821C8D261_METHOD_3_0CB3D614A4DB34A1_OFFSET))(this, a1);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_4521B631ACA75155* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_4521B631ACA75155*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_7FFC8EE821C8D261_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_DDBE9A358A92FDCB(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7FFC8EE821C8D261_METHOD_3_DDBE9A358A92FDCB_OFFSET))(this, a1, a2);
	}
};
