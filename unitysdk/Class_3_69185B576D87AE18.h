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
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_69185B576D87AE18_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xA40A450)
#define CLASS_3_69185B576D87AE18_FROMFLX_OFFSET UNITYSDK_OFFSET(0xA40AA60)
#define CLASS_3_69185B576D87AE18_METHOD_3_0CB3D614A4DB34A1_OFFSET UNITYSDK_OFFSET(0xA40AAE0)
#define CLASS_3_69185B576D87AE18_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0xA40B020)
#define CLASS_3_69185B576D87AE18_METHOD_3_39B55365DE815CAC_OFFSET UNITYSDK_OFFSET(0xA40A160)
#define CLASS_3_69185B576D87AE18_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0xA40B280)
#define CLASS_3_69185B576D87AE18_METHOD_3_A4F18DC7833F5448_OFFSET UNITYSDK_OFFSET(0xA40A4B0)
#define CLASS_3_69185B576D87AE18_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0xA40A830)
#define CLASS_3_69185B576D87AE18_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xA40A930)
#define CLASS_3_69185B576D87AE18_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0xA40B1D0)
#define CLASS_3_69185B576D87AE18_METHOD_3_D8A375BA431DF6B3_OFFSET UNITYSDK_OFFSET(0xA40A760)
#define CLASS_3_69185B576D87AE18__CTOR_OFFSET UNITYSDK_OFFSET(0xA40B010)

inline static constexpr unsigned int Class_3_69185B576D87AE18_TypeDefinitionIndex = 39111;

class Class_3_69185B576D87AE18 : public ::Class_2_4521B631ACA75155
{
public:
	::MoleMole::Config::DynamicInt* Field_3_1; // 0x38
	::MoleMole::Config::DynamicInt* Field_3_0; // 0x40
	::System::String* Field_3_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69185B576D87AE18__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_39B55365DE815CAC(::Class_3_F41D242A20F8FE06* a1, ::Class_2_4521B631ACA75155* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_4521B631ACA75155*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_69185B576D87AE18_METHOD_3_39B55365DE815CAC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_69185B576D87AE18_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D8A375BA431DF6B3(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_69185B576D87AE18_METHOD_3_D8A375BA431DF6B3_OFFSET))(this, a1);
	}

	::Class_2_4521B631ACA75155* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_4521B631ACA75155*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69185B576D87AE18_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69185B576D87AE18_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_69185B576D87AE18_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_69185B576D87AE18* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_69185B576D87AE18*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_69185B576D87AE18_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_4521B631ACA75155* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_4521B631ACA75155*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_69185B576D87AE18_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_0CB3D614A4DB34A1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_69185B576D87AE18_METHOD_3_0CB3D614A4DB34A1_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_A4F18DC7833F5448(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_69185B576D87AE18_METHOD_3_A4F18DC7833F5448_OFFSET))(this, a1, a2);
	}

	static ::Class_3_69185B576D87AE18* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_69185B576D87AE18*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_69185B576D87AE18_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}
};
