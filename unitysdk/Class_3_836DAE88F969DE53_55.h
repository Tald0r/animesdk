#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D0F9C106E2DD0573.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_6205A6C2B1CC7E97;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_8CAD669444D1F6DE;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_836DAE88F969DE53_55_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EACEA0)
#define CLASS_3_836DAE88F969DE53_55_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16EAD470)
#define CLASS_3_836DAE88F969DE53_55_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x16EAD8D0)
#define CLASS_3_836DAE88F969DE53_55_METHOD_3_3DC6B5AAFA39829C_OFFSET UNITYSDK_OFFSET(0x16EAD4F0)
#define CLASS_3_836DAE88F969DE53_55_METHOD_3_766ADA8774C79AAE_OFFSET UNITYSDK_OFFSET(0x16EACCF0)
#define CLASS_3_836DAE88F969DE53_55_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x16EADB40)
#define CLASS_3_836DAE88F969DE53_55_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x16EAD240)
#define CLASS_3_836DAE88F969DE53_55_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x16EAD340)
#define CLASS_3_836DAE88F969DE53_55_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x16EADA80)
#define CLASS_3_836DAE88F969DE53_55_METHOD_3_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x16EAD180)
#define CLASS_3_836DAE88F969DE53_55_METHOD_3_D43D553A8EE4CBFF_OFFSET UNITYSDK_OFFSET(0x16EACBD0)
#define CLASS_3_836DAE88F969DE53_55_METHOD_3_F1153A4377815E0F_OFFSET UNITYSDK_OFFSET(0x16EACF00)
#define CLASS_3_836DAE88F969DE53_55_METHOD_3_F59BC96F290BB1C3_OFFSET UNITYSDK_OFFSET(0x16EADB30)
#define CLASS_3_836DAE88F969DE53_55__CTOR_OFFSET UNITYSDK_OFFSET(0x16EAD8C0)

inline static constexpr unsigned int Class_3_836DAE88F969DE53_55_TypeDefinitionIndex = 68617;

class Class_3_836DAE88F969DE53_55 : public ::Class_2_D0F9C106E2DD0573
{
public:
	::MoleMole::Config::DynamicString* Field_3_0; // 0x38
	::Class_1_6205A6C2B1CC7E97* Field_3_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_55__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D43D553A8EE4CBFF(::Class_3_F41D242A20F8FE06* a1, ::Class_2_D0F9C106E2DD0573* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_D0F9C106E2DD0573*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_55_METHOD_3_D43D553A8EE4CBFF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_D0F9C106E2DD0573*>*>* Method_3_766ADA8774C79AAE()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_D0F9C106E2DD0573*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_55_METHOD_3_766ADA8774C79AAE_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_55_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_55_METHOD_3_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_2_D0F9C106E2DD0573* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_D0F9C106E2DD0573*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_55_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_55_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_55_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_836DAE88F969DE53_55* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_836DAE88F969DE53_55*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_55_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_F1153A4377815E0F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_55_METHOD_3_F1153A4377815E0F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_D0F9C106E2DD0573* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_D0F9C106E2DD0573*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_55_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_D0F9C106E2DD0573*>*>* Method_3_F59BC96F290BB1C3()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_D0F9C106E2DD0573*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_55_METHOD_3_F59BC96F290BB1C3_OFFSET))(this);
	}

	static ::Class_3_836DAE88F969DE53_55* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_836DAE88F969DE53_55*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_55_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_3DC6B5AAFA39829C(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_55_METHOD_3_3DC6B5AAFA39829C_OFFSET))(this, a1);
	}
};
