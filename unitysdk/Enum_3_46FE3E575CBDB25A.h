#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_46FE3E575CBDB25A_TypeDefinitionIndex = 41582;

enum class Enum_3_46FE3E575CBDB25A : ::System::UInt16
{
	None = 0x0,
	SearchLeft = 0x4,
	BreakAtSpace = 0x40,
	SearchUntilNotSpace = 0x80,
	LetterAndNumeric = 0x3,
	SearchRight = 0x8,
	Letter = 0x1,
	SearchBoth = 0xC,
	WordBreak = 0x100,
	Numeric = 0x2,
};
