#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/Enum_3_20CD16F10E6294C2.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_C836D00248E6EFFE;
class Class_1_EF896E1D0FDF202A;
class Class_2_14986121AA61AD99;
class Class_2_8CAD669444D1F6DE;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_5408F195547AB334_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xD7446D0)
#define CLASS_3_5408F195547AB334_FROMFLX_OFFSET UNITYSDK_OFFSET(0xD745040)
#define CLASS_3_5408F195547AB334_METHOD_3_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0xD7450C0)
#define CLASS_3_5408F195547AB334_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0xD746060)
#define CLASS_3_5408F195547AB334_METHOD_3_38B782D577BF317C_OFFSET UNITYSDK_OFFSET(0xD744D30)
#define CLASS_3_5408F195547AB334_METHOD_3_7FD63C6343C37996_OFFSET UNITYSDK_OFFSET(0xD744730)
#define CLASS_3_5408F195547AB334_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0xD746210)
#define CLASS_3_5408F195547AB334_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0xD744E10)
#define CLASS_3_5408F195547AB334_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xD744F10)
#define CLASS_3_5408F195547AB334_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0xD744610)
#define CLASS_3_5408F195547AB334_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0xD745FE0)
#define CLASS_3_5408F195547AB334__CTOR_OFFSET UNITYSDK_OFFSET(0xD745FA0)

inline static constexpr unsigned int Class_3_5408F195547AB334_TypeDefinitionIndex = 58722;

class Class_3_5408F195547AB334 : public ::Class_2_0F138252A5783001
{
public:
	::MoleMole::Config::DynamicInt* Field_3_4; // 0x20
	::MoleMole::Config::DynamicInt* Field_3_3; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_5; // 0x30
	::Il2CppArray<::Class_1_EF896E1D0FDF202A*>* Field_3_8; // 0x38
	::MoleMole::Config::DynamicInt* Field_3_0; // 0x40
	::System::Collections::Generic::List_1<::System::String*>* Field_3_2; // 0x48
	::System::String* Field_3_7; // 0x50
	::MoleMole::Config::DynamicFloat* Field_3_1; // 0x58
	::Enum_3_20CD16F10E6294C2 Field_3_6; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5408F195547AB334__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*))((::PBYTE)hIl2Cpp + CLASS_3_5408F195547AB334_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5408F195547AB334_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_38B782D577BF317C(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_5408F195547AB334_METHOD_3_38B782D577BF317C_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5408F195547AB334_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5408F195547AB334_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_5408F195547AB334_FROMFLX_OFFSET))(this, a1);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*))((::PBYTE)hIl2Cpp + CLASS_3_5408F195547AB334_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_3_5408F195547AB334* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_5408F195547AB334*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5408F195547AB334_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_5408F195547AB334_METHOD_3_0BD393E566CD3D4A_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_7FD63C6343C37996(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5408F195547AB334_METHOD_3_7FD63C6343C37996_OFFSET))(this, a1, a2);
	}

	static ::Class_3_5408F195547AB334* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_5408F195547AB334*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_5408F195547AB334_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}
};
