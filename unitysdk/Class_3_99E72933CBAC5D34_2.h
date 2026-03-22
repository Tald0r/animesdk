#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/TeamRelationship.h"

class Class_1_236FD73ABC492E3F;
class Class_1_C836D00248E6EFFE;
class Class_2_14986121AA61AD99;
class Class_2_8CAD669444D1F6DE;
class Class_3_F41D242A20F8FE06;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_99E72933CBAC5D34_2_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xA2AB870)
#define CLASS_3_99E72933CBAC5D34_2_FROMFLX_OFFSET UNITYSDK_OFFSET(0xA2AC0E0)
#define CLASS_3_99E72933CBAC5D34_2_METHOD_3_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0xA2AC160)
#define CLASS_3_99E72933CBAC5D34_2_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0xA2AC910)
#define CLASS_3_99E72933CBAC5D34_2_METHOD_3_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0xA2ABE40)
#define CLASS_3_99E72933CBAC5D34_2_METHOD_3_5EA5C90D9F5F1822_OFFSET UNITYSDK_OFFSET(0xA2AB8D0)
#define CLASS_3_99E72933CBAC5D34_2_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0xA2ACB40)
#define CLASS_3_99E72933CBAC5D34_2_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0xA2ABEB0)
#define CLASS_3_99E72933CBAC5D34_2_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xA2ABFB0)
#define CLASS_3_99E72933CBAC5D34_2_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0xA2AB7B0)
#define CLASS_3_99E72933CBAC5D34_2_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0xA2ACAC0)
#define CLASS_3_99E72933CBAC5D34_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA2AC900)

inline static constexpr unsigned int Class_3_99E72933CBAC5D34_2_TypeDefinitionIndex = 64586;

class Class_3_99E72933CBAC5D34_2 : public ::Class_2_0F138252A5783001
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_3_2; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* Field_3_1; // 0x28
	::System::Boolean Field_3_3; // 0x30
	::System::Boolean Field_3_4; // 0x31
	::MoleMole::Config::TeamRelationship Field_3_0; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99E72933CBAC5D34_2__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*))((::PBYTE)hIl2Cpp + CLASS_3_99E72933CBAC5D34_2_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_99E72933CBAC5D34_2_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_99E72933CBAC5D34_2_METHOD_3_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99E72933CBAC5D34_2_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99E72933CBAC5D34_2_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_99E72933CBAC5D34_2_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_99E72933CBAC5D34_2* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_99E72933CBAC5D34_2*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_99E72933CBAC5D34_2_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*))((::PBYTE)hIl2Cpp + CLASS_3_99E72933CBAC5D34_2_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_99E72933CBAC5D34_2_METHOD_3_00531776927FE5B6_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_5EA5C90D9F5F1822(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_99E72933CBAC5D34_2_METHOD_3_5EA5C90D9F5F1822_OFFSET))(this, a1, a2);
	}

	static ::Class_3_99E72933CBAC5D34_2* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_99E72933CBAC5D34_2*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_99E72933CBAC5D34_2_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}
};
