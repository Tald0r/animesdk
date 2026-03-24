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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_4C32242521D9CDAC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x64F44A0)
#define CLASS_3_4C32242521D9CDAC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x64F4B70)
#define CLASS_3_4C32242521D9CDAC_METHOD_3_0792C269E4075B81_OFFSET UNITYSDK_OFFSET(0x64F4130)
#define CLASS_3_4C32242521D9CDAC_METHOD_3_10D8E8D9841C409C_OFFSET UNITYSDK_OFFSET(0x64F4050)
#define CLASS_3_4C32242521D9CDAC_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x64F5010)
#define CLASS_3_4C32242521D9CDAC_METHOD_3_677EDF573F76D700_OFFSET UNITYSDK_OFFSET(0x64F3810)
#define CLASS_3_4C32242521D9CDAC_METHOD_3_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x64F4BF0)
#define CLASS_3_4C32242521D9CDAC_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x64F51C0)
#define CLASS_3_4C32242521D9CDAC_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x64F4940)
#define CLASS_3_4C32242521D9CDAC_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x64F4A40)
#define CLASS_3_4C32242521D9CDAC_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x64F4F60)
#define CLASS_3_4C32242521D9CDAC_METHOD_3_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x64F48A0)
#define CLASS_3_4C32242521D9CDAC_METHOD_3_E0AC97338167133E_OFFSET UNITYSDK_OFFSET(0x64F4500)
#define CLASS_3_4C32242521D9CDAC__CTOR_OFFSET UNITYSDK_OFFSET(0x64F4F50)

inline static constexpr unsigned int Class_3_4C32242521D9CDAC_TypeDefinitionIndex = 76922;

class Class_3_4C32242521D9CDAC : public ::Class_2_4521B631ACA75155
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_3_1; // 0x38
	::System::Int32 Field_3_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4C32242521D9CDAC__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_677EDF573F76D700(::Class_3_F41D242A20F8FE06* a1, ::Class_2_4521B631ACA75155* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_4521B631ACA75155*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_4C32242521D9CDAC_METHOD_3_677EDF573F76D700_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4C32242521D9CDAC_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_4C32242521D9CDAC_METHOD_3_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_2_4521B631ACA75155* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_4521B631ACA75155*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4C32242521D9CDAC_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4C32242521D9CDAC_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_4C32242521D9CDAC_FROMFLX_OFFSET))(this, a1);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_4521B631ACA75155* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_4521B631ACA75155*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_4C32242521D9CDAC_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Class_3_4C32242521D9CDAC* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_4C32242521D9CDAC*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4C32242521D9CDAC_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_10D8E8D9841C409C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_4C32242521D9CDAC_METHOD_3_10D8E8D9841C409C_OFFSET))(a1);
	}

	::System::Boolean Method_3_E0AC97338167133E(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4C32242521D9CDAC_METHOD_3_E0AC97338167133E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0792C269E4075B81(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_4C32242521D9CDAC_METHOD_3_0792C269E4075B81_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_4C32242521D9CDAC_METHOD_3_7821D1D4DDDF7E01_OFFSET))(this, a1);
	}

	static ::Class_3_4C32242521D9CDAC* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_4C32242521D9CDAC*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_4C32242521D9CDAC_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}
};
