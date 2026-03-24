#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_95932C222EBC5BA5.h"
#include "unitysdk/Enum_3_0FC69F51F876980B.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_F6A6667BD36A97A9.h"

class Class_1_43BD383C98B4C0C5_93;
class Class_1_80CEC7B990B4301D;
class Class_5_AF65C3A968E836D2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_0A0249BC1D25B534_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x6B13840)
#define CLASS_4_0A0249BC1D25B534_METHOD_4_3FC5188C07CF0F71_OFFSET UNITYSDK_OFFSET(0x6B13B50)
#define CLASS_4_0A0249BC1D25B534_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x6B13AF0)
#define CLASS_4_0A0249BC1D25B534_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x6B13920)
#define CLASS_4_0A0249BC1D25B534__CCTOR_OFFSET UNITYSDK_OFFSET(0x6B138A0)
#define CLASS_4_0A0249BC1D25B534__CTOR_OFFSET UNITYSDK_OFFSET(0x6B13A30)

inline static constexpr unsigned int Class_4_0A0249BC1D25B534_TypeDefinitionIndex = 55949;

class Class_4_0A0249BC1D25B534 : public ::Class_3_95932C222EBC5BA5
{
public:
	// static const ::System::Int32 Field_4_0 = 0x120; // 0x0
	::Class_5_AF65C3A968E836D2* Field_4_1; // 0x50
	::System::Collections::Generic::List_1<::System::Int32>* Field_4_5; // 0x58
	::Class_1_80CEC7B990B4301D* Field_4_2; // 0x60
	::Class_1_43BD383C98B4C0C5_93* Field_4_3; // 0x68
	::System::Collections::Generic::List_1<::Struct_2_F6A6667BD36A97A9>* Field_4_8; // 0x70
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_4_7; // 0x78
	::Enum_3_0FC69F51F876980B Field_4_9; // 0x80
	::System::Single Field_4_4; // 0x84
	::System::Boolean Field_4_6; // 0x88

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_0A0249BC1D25B534__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0A0249BC1D25B534__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0A0249BC1D25B534_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0A0249BC1D25B534_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0A0249BC1D25B534_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_4_0A0249BC1D25B534* Method_4_3FC5188C07CF0F71()
	{
		return ((::Class_4_0A0249BC1D25B534*(*)())((::PBYTE)hIl2Cpp + CLASS_4_0A0249BC1D25B534_METHOD_4_3FC5188C07CF0F71_OFFSET))();
	}
};
