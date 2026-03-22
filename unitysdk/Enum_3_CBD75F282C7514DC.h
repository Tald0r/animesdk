#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_CBD75F282C7514DC_TypeDefinitionIndex = 78707;

enum class Enum_3_CBD75F282C7514DC : ::System::Byte
{
	TagQuad = 0xE,
	LineBreak = 0x4,
	Word = 0x2,
	SpecialWord = 0x5,
	TagColor = 0xB,
	PLAIN_TOKEN_MASK = 0x1F,
	TAG_END = 0xF,
	NotInEnd = 0x20,
	TagItalic = 0x9,
	TAG_BEGIN = 0x7,
	NotInHeadIfAfterTextMask = 0x80,
	SPECIAL_MASK = 0x80,
	ChineseWord = 0x6,
	NotInHead = 0x40,
	TAG_RIGHT_MASK = 0x80,
	TagLink = 0xC,
	Ignored = 0x3,
	TagSize = 0xA,
	TAG_PAIRED_END = 0xD,
	NotInHeadIfAfterText = 0xC0,
	TagBold = 0x8,
	Chars = 0x1,
	Space = 0x0,
	INVALID = 0xFF,
	TOKEN_MASK = 0x7F,
	NotInHead_NotInEnd = 0x60,
};
