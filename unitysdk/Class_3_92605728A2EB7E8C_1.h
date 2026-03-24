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
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_92605728A2EB7E8C_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x97698A0)
#define CLASS_3_92605728A2EB7E8C_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x9769FF0)
#define CLASS_3_92605728A2EB7E8C_1_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x976A990)
#define CLASS_3_92605728A2EB7E8C_1_METHOD_3_8741A88D50268453_OFFSET UNITYSDK_OFFSET(0x976A070)
#define CLASS_3_92605728A2EB7E8C_1_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x976A830)
#define CLASS_3_92605728A2EB7E8C_1_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x9769DC0)
#define CLASS_3_92605728A2EB7E8C_1_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x9769EC0)
#define CLASS_3_92605728A2EB7E8C_1_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x976AB40)
#define CLASS_3_92605728A2EB7E8C_1_METHOD_3_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x9769D20)
#define CLASS_3_92605728A2EB7E8C_1_METHOD_3_D692029B7700F7B0_OFFSET UNITYSDK_OFFSET(0x9769790)
#define CLASS_3_92605728A2EB7E8C_1_METHOD_3_F6A22BB1267B474D_OFFSET UNITYSDK_OFFSET(0x9769900)
#define CLASS_3_92605728A2EB7E8C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x976A820)

inline static constexpr unsigned int Class_3_92605728A2EB7E8C_1_TypeDefinitionIndex = 72689;

class Class_3_92605728A2EB7E8C_1 : public ::Class_2_4521B631ACA75155
{
public:
	::MoleMole::Config::DynamicString* Field_3_0; // 0x38
	::System::Single Field_3_2; // 0x40
	::System::Boolean Field_3_3; // 0x44
	::System::Single Field_3_1; // 0x48
	::System::Int32 Field_3_4; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_92605728A2EB7E8C_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D692029B7700F7B0(::Class_3_F41D242A20F8FE06* a1, ::Class_2_4521B631ACA75155* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_4521B631ACA75155*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_92605728A2EB7E8C_1_METHOD_3_D692029B7700F7B0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_92605728A2EB7E8C_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_92605728A2EB7E8C_1_METHOD_3_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_2_4521B631ACA75155* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_4521B631ACA75155*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_92605728A2EB7E8C_1_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_92605728A2EB7E8C_1_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_92605728A2EB7E8C_1_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_92605728A2EB7E8C_1* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_92605728A2EB7E8C_1*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_92605728A2EB7E8C_1_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	static ::Class_3_92605728A2EB7E8C_1* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_92605728A2EB7E8C_1*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_92605728A2EB7E8C_1_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_8741A88D50268453(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_92605728A2EB7E8C_1_METHOD_3_8741A88D50268453_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F6A22BB1267B474D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_92605728A2EB7E8C_1_METHOD_3_F6A22BB1267B474D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_4521B631ACA75155* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_4521B631ACA75155*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_92605728A2EB7E8C_1_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
