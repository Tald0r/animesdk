#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_175E7DC52483A3CE.h"
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

#define CLASS_2_5745DA614B80D512_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x6AC6930)
#define CLASS_2_5745DA614B80D512_FROMFLX_OFFSET UNITYSDK_OFFSET(0x6AC6E70)
#define CLASS_2_5745DA614B80D512_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x6AC7340)
#define CLASS_2_5745DA614B80D512_METHOD_2_19FF93AA9C100818_OFFSET UNITYSDK_OFFSET(0x6AC6750)
#define CLASS_2_5745DA614B80D512_METHOD_2_1AE68D2660A32860_OFFSET UNITYSDK_OFFSET(0x6AC7290)
#define CLASS_2_5745DA614B80D512_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x6AC6BD0)
#define CLASS_2_5745DA614B80D512_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x6AC6D40)
#define CLASS_2_5745DA614B80D512_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x6AC74F0)
#define CLASS_2_5745DA614B80D512_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x6AC6C40)
#define CLASS_2_5745DA614B80D512_METHOD_2_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x6AC6EF0)
#define CLASS_2_5745DA614B80D512_METHOD_2_F1153A4377815E0F_OFFSET UNITYSDK_OFFSET(0x6AC6990)
#define CLASS_2_5745DA614B80D512__CTOR_OFFSET UNITYSDK_OFFSET(0x6AC6740)

inline static constexpr unsigned int Class_2_5745DA614B80D512_TypeDefinitionIndex = 53940;

class Class_2_5745DA614B80D512 : public ::Class_1_175E7DC52483A3CE
{
public:
	::System::String* Field_2_0; // 0x18
	::System::String* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5745DA614B80D512__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_19FF93AA9C100818(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::String*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_5745DA614B80D512_METHOD_2_19FF93AA9C100818_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5745DA614B80D512_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_5745DA614B80D512_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_1_175E7DC52483A3CE* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_175E7DC52483A3CE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5745DA614B80D512_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5745DA614B80D512_METHOD_2_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_5745DA614B80D512_FROMFLX_OFFSET))(this, a1);
	}

	::System::String* Method_2_1AE68D2660A32860(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::String*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_5745DA614B80D512_METHOD_2_1AE68D2660A32860_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_5745DA614B80D512_METHOD_2_DF413489329CBAF8_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F1153A4377815E0F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5745DA614B80D512_METHOD_2_F1153A4377815E0F_OFFSET))(this, a1, a2);
	}

	static ::Class_2_5745DA614B80D512* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_5745DA614B80D512*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5745DA614B80D512_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	static ::Class_2_5745DA614B80D512* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_5745DA614B80D512*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_5745DA614B80D512_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}
};
