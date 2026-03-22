#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D0F9C106E2DD0573.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_4ED21A115C97704D;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_8CAD669444D1F6DE;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_836DAE88F969DE53_46_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x73720E0)
#define CLASS_3_836DAE88F969DE53_46_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7372790)
#define CLASS_3_836DAE88F969DE53_46_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x7372F00)
#define CLASS_3_836DAE88F969DE53_46_METHOD_3_3DC6B5AAFA39829C_OFFSET UNITYSDK_OFFSET(0x7372810)
#define CLASS_3_836DAE88F969DE53_46_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x73730B0)
#define CLASS_3_836DAE88F969DE53_46_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x7372560)
#define CLASS_3_836DAE88F969DE53_46_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x7372660)
#define CLASS_3_836DAE88F969DE53_46_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x7373210)
#define CLASS_3_836DAE88F969DE53_46_METHOD_3_D43D553A8EE4CBFF_OFFSET UNITYSDK_OFFSET(0x7371FC0)
#define CLASS_3_836DAE88F969DE53_46_METHOD_3_D8A375BA431DF6B3_OFFSET UNITYSDK_OFFSET(0x7372470)
#define CLASS_3_836DAE88F969DE53_46_METHOD_3_E061DA2D9F264BD1_OFFSET UNITYSDK_OFFSET(0x7372140)
#define CLASS_3_836DAE88F969DE53_46__CTOR_OFFSET UNITYSDK_OFFSET(0x7372EF0)

inline static constexpr unsigned int Class_3_836DAE88F969DE53_46_TypeDefinitionIndex = 69094;

class Class_3_836DAE88F969DE53_46 : public ::Class_2_D0F9C106E2DD0573
{
public:
	::Class_1_4ED21A115C97704D* Field_3_3; // 0x38
	::MoleMole::Config::DynamicString* Field_3_1; // 0x40
	::Class_1_4ED21A115C97704D* Field_3_2; // 0x48
	::MoleMole::Config::DynamicString* Field_3_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_46__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D43D553A8EE4CBFF(::Class_3_F41D242A20F8FE06* a1, ::Class_2_D0F9C106E2DD0573* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_D0F9C106E2DD0573*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_46_METHOD_3_D43D553A8EE4CBFF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_46_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D8A375BA431DF6B3(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_46_METHOD_3_D8A375BA431DF6B3_OFFSET))(this, a1);
	}

	::Class_2_D0F9C106E2DD0573* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_D0F9C106E2DD0573*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_46_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_46_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_46_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_836DAE88F969DE53_46* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_836DAE88F969DE53_46*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_46_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_E061DA2D9F264BD1(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_46_METHOD_3_E061DA2D9F264BD1_OFFSET))(this, a1, a2);
	}

	static ::Class_3_836DAE88F969DE53_46* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_836DAE88F969DE53_46*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_46_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_D0F9C106E2DD0573* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_D0F9C106E2DD0573*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_46_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_3DC6B5AAFA39829C(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_46_METHOD_3_3DC6B5AAFA39829C_OFFSET))(this, a1);
	}
};
