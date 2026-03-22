#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_AF65C3A968E836D2_Struct_2_0AFF4972FB25A51D.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_5_AF65C3A968E836D2;

#define CLASS_5_AF65C3A968E836D2_CLASS_1_2BAB6BB5AF8F8AD9_METHOD_1_7E85B802BB53AA1D_OFFSET UNITYSDK_OFFSET(0x94E1920)
#define CLASS_5_AF65C3A968E836D2_CLASS_1_2BAB6BB5AF8F8AD9_METHOD_1_B03177FE9E67780A_OFFSET UNITYSDK_OFFSET(0x94E28F0)
#define CLASS_5_AF65C3A968E836D2_CLASS_1_2BAB6BB5AF8F8AD9_METHOD_1_C980FBA18910E227_OFFSET UNITYSDK_OFFSET(0x94E1F60)
#define CLASS_5_AF65C3A968E836D2_CLASS_1_2BAB6BB5AF8F8AD9_METHOD_1_FAE65C1EB12C0B18_OFFSET UNITYSDK_OFFSET(0x94E1C20)
#define CLASS_5_AF65C3A968E836D2_CLASS_1_2BAB6BB5AF8F8AD9__CTOR_OFFSET UNITYSDK_OFFSET(0x94DC5B0)

inline static constexpr unsigned int Class_5_AF65C3A968E836D2_Class_1_2BAB6BB5AF8F8AD9_TypeDefinitionIndex = 52276;

class Class_5_AF65C3A968E836D2_Class_1_2BAB6BB5AF8F8AD9 : public ::System::Object
{
public:
	::Class_5_AF65C3A968E836D2* Field_1_0; // 0x10
	::MoleMole::Vector2Int Field_1_3; // 0x18
	::MoleMole::HollowChessboard::HollowCell Field_1_2; // 0x20
	::MoleMole::HollowChessboard::HollowCell Field_1_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_AF65C3A968E836D2_CLASS_1_2BAB6BB5AF8F8AD9__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_7E85B802BB53AA1D(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_AF65C3A968E836D2_CLASS_1_2BAB6BB5AF8F8AD9_METHOD_1_7E85B802BB53AA1D_OFFSET))(this, a1, a2);
	}

	::System::Nullable_1<::System::Double> Method_1_FAE65C1EB12C0B18(::Class_5_AF65C3A968E836D2_Struct_2_0AFF4972FB25A51D& a1)
	{
		return ((::System::Nullable_1<::System::Double>(*)(::PVOID, ::Class_5_AF65C3A968E836D2_Struct_2_0AFF4972FB25A51D&))((::PBYTE)hIl2Cpp + CLASS_5_AF65C3A968E836D2_CLASS_1_2BAB6BB5AF8F8AD9_METHOD_1_FAE65C1EB12C0B18_OFFSET))(this, a1);
	}

	::System::Double Method_1_C980FBA18910E227(::System::Boolean a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Double(*)(::PVOID, ::System::Boolean, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_AF65C3A968E836D2_CLASS_1_2BAB6BB5AF8F8AD9_METHOD_1_C980FBA18910E227_OFFSET))(this, a1, a2, a3);
	}

	::System::Double Method_1_B03177FE9E67780A(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Double(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_AF65C3A968E836D2_CLASS_1_2BAB6BB5AF8F8AD9_METHOD_1_B03177FE9E67780A_OFFSET))(this, a1);
	}
};
