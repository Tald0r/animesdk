#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_4_DF8BFBD81823365E;

#define CLASS_3_157FBFA3560D985A_CLASS_1_AE27AAE5570A9924_METHOD_1_702FFC05D788B55B_OFFSET UNITYSDK_OFFSET(0xE7A9A20)
#define CLASS_3_157FBFA3560D985A_CLASS_1_AE27AAE5570A9924__CTOR_OFFSET UNITYSDK_OFFSET(0xE7A9A10)

inline static constexpr unsigned int Class_3_157FBFA3560D985A_Class_1_AE27AAE5570A9924_TypeDefinitionIndex = 61874;

class Class_3_157FBFA3560D985A_Class_1_AE27AAE5570A9924 : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowCell Field_1_3; // 0x10
	::System::UInt32 Field_1_1; // 0x1C
	::System::Int32 Field_1_2; // 0x20
	::System::UInt32 Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_157FBFA3560D985A_CLASS_1_AE27AAE5570A9924__CTOR_OFFSET))(this);
	}

	static ::Class_3_157FBFA3560D985A_Class_1_AE27AAE5570A9924* Method_1_702FFC05D788B55B(::Class_4_DF8BFBD81823365E* a1, ::Class_4_DF8BFBD81823365E* a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::Class_3_157FBFA3560D985A_Class_1_AE27AAE5570A9924*(*)(::Class_4_DF8BFBD81823365E*, ::Class_4_DF8BFBD81823365E*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_157FBFA3560D985A_CLASS_1_AE27AAE5570A9924_METHOD_1_702FFC05D788B55B_OFFSET))(a1, a2, a3);
	}
};
