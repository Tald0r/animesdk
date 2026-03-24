#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4521B631ACA75155.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ColliderLayerType.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_8CAD669444D1F6DE;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_CD07D1B229C77250_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xBC52BD0)
#define CLASS_3_CD07D1B229C77250_FROMFLX_OFFSET UNITYSDK_OFFSET(0xBC534D0)
#define CLASS_3_CD07D1B229C77250_METHOD_3_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0xBC53550)
#define CLASS_3_CD07D1B229C77250_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0xBC53F10)
#define CLASS_3_CD07D1B229C77250_METHOD_3_4B45CF3CF3BF3EEE_OFFSET UNITYSDK_OFFSET(0x6AE3BF0)
#define CLASS_3_CD07D1B229C77250_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0xBC540C0)
#define CLASS_3_CD07D1B229C77250_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0xBC532A0)
#define CLASS_3_CD07D1B229C77250_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xBC533A0)
#define CLASS_3_CD07D1B229C77250_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0xBC53E60)
#define CLASS_3_CD07D1B229C77250_METHOD_3_D8A375BA431DF6B3_OFFSET UNITYSDK_OFFSET(0xBC531E0)
#define CLASS_3_CD07D1B229C77250_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xBC52BC0)
#define CLASS_3_CD07D1B229C77250_METHOD_3_FDFE9AC64A706A16_OFFSET UNITYSDK_OFFSET(0xBC52C30)
#define CLASS_3_CD07D1B229C77250__CTOR_OFFSET UNITYSDK_OFFSET(0xBC53E50)

inline static constexpr unsigned int Class_3_CD07D1B229C77250_TypeDefinitionIndex = 44993;

class Class_3_CD07D1B229C77250 : public ::Class_2_4521B631ACA75155
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_3_2; // 0x38
	::System::String* Field_3_1; // 0x40
	::MoleMole::Config::ColliderLayerType Field_3_5; // 0x48
	::System::Boolean Field_3_3; // 0x4C
	::System::Boolean Field_3_4; // 0x4D
	::System::Boolean Field_3_0; // 0x4E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD07D1B229C77250__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_4B45CF3CF3BF3EEE(::Class_3_F41D242A20F8FE06* a1, ::Class_2_4521B631ACA75155* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_4521B631ACA75155*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_CD07D1B229C77250_METHOD_3_4B45CF3CF3BF3EEE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD07D1B229C77250_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_CD07D1B229C77250_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D8A375BA431DF6B3(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_CD07D1B229C77250_METHOD_3_D8A375BA431DF6B3_OFFSET))(this, a1);
	}

	::Class_2_4521B631ACA75155* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_4521B631ACA75155*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD07D1B229C77250_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD07D1B229C77250_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_CD07D1B229C77250_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_FDFE9AC64A706A16(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_CD07D1B229C77250_METHOD_3_FDFE9AC64A706A16_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_4521B631ACA75155* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_4521B631ACA75155*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_CD07D1B229C77250_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_CD07D1B229C77250_METHOD_3_0BD393E566CD3D4A_OFFSET))(this, a1);
	}

	static ::Class_3_CD07D1B229C77250* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_CD07D1B229C77250*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_CD07D1B229C77250_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	static ::Class_3_CD07D1B229C77250* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_CD07D1B229C77250*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_CD07D1B229C77250_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}
};
