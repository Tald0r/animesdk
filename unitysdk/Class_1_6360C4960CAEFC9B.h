#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/ChessboardView/LineInfo.h"
#include "unitysdk/Struct_2_90CF7B92576C9A88.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6360C4960CAEFC9B__CTOR_OFFSET UNITYSDK_OFFSET(0xD609A60)

inline static constexpr unsigned int Class_1_6360C4960CAEFC9B_TypeDefinitionIndex = 61185;

class Class_1_6360C4960CAEFC9B : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::MoleMole::HollowChessboard::ChessboardView::LineInfo Field_1_2; // 0x14
	::Struct_2_90CF7B92576C9A88 Field_1_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6360C4960CAEFC9B__CTOR_OFFSET))(this);
	}
};
