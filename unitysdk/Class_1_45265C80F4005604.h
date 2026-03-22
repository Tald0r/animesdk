#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CD0EFC7FB96FAA42.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_3C4540E74B527206;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_8CAD669444D1F6DE;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_45265C80F4005604_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xAADDD60)
#define CLASS_1_45265C80F4005604_FROMFLX_OFFSET UNITYSDK_OFFSET(0xAADDFD0)
#define CLASS_1_45265C80F4005604_METHOD_1_2B1F98610A325D95_OFFSET UNITYSDK_OFFSET(0xAADE390)
#define CLASS_1_45265C80F4005604_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0xAADE050)
#define CLASS_1_45265C80F4005604_METHOD_1_7B582CD680642495_1_OFFSET UNITYSDK_OFFSET(0xAADEA20)
#define CLASS_1_45265C80F4005604_METHOD_1_7B582CD680642495_OFFSET UNITYSDK_OFFSET(0xAADE8D0)
#define CLASS_1_45265C80F4005604_METHOD_1_FE68BBC7DCCBEB6D_OFFSET UNITYSDK_OFFSET(0xAADDDC0)
#define CLASS_1_45265C80F4005604__CTOR_OFFSET UNITYSDK_OFFSET(0xAADE380)

inline static constexpr unsigned int Class_1_45265C80F4005604_TypeDefinitionIndex = 46933;

class Class_1_45265C80F4005604 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_3C4540E74B527206*>* Field_1_1; // 0x10
	::Enum_3_CD0EFC7FB96FAA42 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45265C80F4005604__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_45265C80F4005604_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_45265C80F4005604_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_45265C80F4005604_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2B1F98610A325D95(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3, ::Class_1_B7E341C5F1A6F199* a4, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::Class_1_B7E341C5F1A6F199*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + CLASS_1_45265C80F4005604_METHOD_1_2B1F98610A325D95_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_FE68BBC7DCCBEB6D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_45265C80F4005604_METHOD_1_FE68BBC7DCCBEB6D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7B582CD680642495(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_45265C80F4005604_METHOD_1_7B582CD680642495_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B582CD680642495_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_45265C80F4005604_METHOD_1_7B582CD680642495_1_OFFSET))(this, a1);
	}
};
