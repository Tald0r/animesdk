#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"

class Class_1_236FD73ABC492E3F;
class Class_1_C836D00248E6EFFE;
class Class_1_EF896E1D0FDF202A;
class Class_2_14986121AA61AD99;
class Class_2_8CAD669444D1F6DE;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_822B39F53DAF60FB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xD424EF0)
#define CLASS_3_822B39F53DAF60FB_FROMFLX_OFFSET UNITYSDK_OFFSET(0xD425860)
#define CLASS_3_822B39F53DAF60FB_METHOD_3_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0xD4258E0)
#define CLASS_3_822B39F53DAF60FB_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0xD426610)
#define CLASS_3_822B39F53DAF60FB_METHOD_3_3CA9D405AABD10AA_OFFSET UNITYSDK_OFFSET(0xD424F50)
#define CLASS_3_822B39F53DAF60FB_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0xD426840)
#define CLASS_3_822B39F53DAF60FB_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0xD425630)
#define CLASS_3_822B39F53DAF60FB_METHOD_3_B1FCFA7C1C5829AA_OFFSET UNITYSDK_OFFSET(0xD425590)
#define CLASS_3_822B39F53DAF60FB_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xD425730)
#define CLASS_3_822B39F53DAF60FB_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0xD424E30)
#define CLASS_3_822B39F53DAF60FB_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0xD4267C0)
#define CLASS_3_822B39F53DAF60FB__CTOR_OFFSET UNITYSDK_OFFSET(0xD426600)

inline static constexpr unsigned int Class_3_822B39F53DAF60FB_TypeDefinitionIndex = 71300;

class Class_3_822B39F53DAF60FB : public ::Class_2_0F138252A5783001
{
public:
	::MoleMole::Config::DynamicString* Field_3_5; // 0x20
	::Il2CppArray<::Class_1_EF896E1D0FDF202A*>* Field_3_4; // 0x28
	::MoleMole::Config::ConfigPosRot* Field_3_0; // 0x30
	::MoleMole::Config::ConfigPosRot* Field_3_1; // 0x38
	::System::String* Field_3_3; // 0x40
	::MoleMole::Config::AbilityTargetting Field_3_2; // 0x48
	::System::Boolean Field_3_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_822B39F53DAF60FB__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*))((::PBYTE)hIl2Cpp + CLASS_3_822B39F53DAF60FB_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_822B39F53DAF60FB_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B1FCFA7C1C5829AA(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_822B39F53DAF60FB_METHOD_3_B1FCFA7C1C5829AA_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_822B39F53DAF60FB_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_822B39F53DAF60FB_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_822B39F53DAF60FB_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_822B39F53DAF60FB* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_822B39F53DAF60FB*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_822B39F53DAF60FB_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_3CA9D405AABD10AA(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_822B39F53DAF60FB_METHOD_3_3CA9D405AABD10AA_OFFSET))(this, a1, a2);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*))((::PBYTE)hIl2Cpp + CLASS_3_822B39F53DAF60FB_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_3_822B39F53DAF60FB* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_822B39F53DAF60FB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_822B39F53DAF60FB_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_822B39F53DAF60FB_METHOD_3_0578713EDB32B89E_OFFSET))(this, a1);
	}
};
