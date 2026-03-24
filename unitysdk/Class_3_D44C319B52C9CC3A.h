#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4521B631ACA75155.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_8CAD669444D1F6DE;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_D44C319B52C9CC3A_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE1198D0)
#define CLASS_3_D44C319B52C9CC3A_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE119DE0)
#define CLASS_3_D44C319B52C9CC3A_METHOD_3_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0xE119930)
#define CLASS_3_D44C319B52C9CC3A_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0xE11A080)
#define CLASS_3_D44C319B52C9CC3A_METHOD_3_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0xE119E60)
#define CLASS_3_D44C319B52C9CC3A_METHOD_3_87AE749626E7C010_OFFSET UNITYSDK_OFFSET(0xE119780)
#define CLASS_3_D44C319B52C9CC3A_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0xE11A2E0)
#define CLASS_3_D44C319B52C9CC3A_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0xE119BB0)
#define CLASS_3_D44C319B52C9CC3A_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xE119CB0)
#define CLASS_3_D44C319B52C9CC3A_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0xE11A230)
#define CLASS_3_D44C319B52C9CC3A_METHOD_3_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0xE119B10)
#define CLASS_3_D44C319B52C9CC3A__CTOR_OFFSET UNITYSDK_OFFSET(0xE11A070)

inline static constexpr unsigned int Class_3_D44C319B52C9CC3A_TypeDefinitionIndex = 55351;

class Class_3_D44C319B52C9CC3A : public ::Class_2_4521B631ACA75155
{
public:
	::System::String* Field_3_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D44C319B52C9CC3A__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_87AE749626E7C010(::Class_3_F41D242A20F8FE06* a1, ::Class_2_4521B631ACA75155* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_4521B631ACA75155*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_D44C319B52C9CC3A_METHOD_3_87AE749626E7C010_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D44C319B52C9CC3A_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_D44C319B52C9CC3A_METHOD_3_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_2_4521B631ACA75155* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_4521B631ACA75155*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D44C319B52C9CC3A_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D44C319B52C9CC3A_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_D44C319B52C9CC3A_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_D44C319B52C9CC3A* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_D44C319B52C9CC3A*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D44C319B52C9CC3A_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_D44C319B52C9CC3A_METHOD_3_7821D1D4DDDF7E01_OFFSET))(this, a1);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_4521B631ACA75155* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_4521B631ACA75155*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_D44C319B52C9CC3A_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D44C319B52C9CC3A_METHOD_3_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
	}

	static ::Class_3_D44C319B52C9CC3A* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_D44C319B52C9CC3A*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_D44C319B52C9CC3A_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}
};
