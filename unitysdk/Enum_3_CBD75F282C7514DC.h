#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_CBD75F282C7514DC_TypeDefinitionIndex = 78441;

enum class Enum_3_CBD75F282C7514DC : ::System::Byte
{
	NotInHeadIfAfterTextMask = 0x80,
	TAG_RIGHT_MASK = 0x80,
	Word = 0x2,
	Space = 0x0,
	NotInHead_NotInEnd = 0x60,
	TagColor = 0xB,
	TagQuad = 0xE,
	PLAIN_TOKEN_MASK = 0x1F,
	SpecialWord = 0x5,
	NotInHead = 0x40,
	TAG_END = 0xF,
	TAG_BEGIN = 0x7,
	TagSize = 0xA,
	TAG_PAIRED_END = 0xD,
	INVALID = 0xFF,
	TagItalic = 0x9,
	LineBreak = 0x4,
	Ignored = 0x3,
	ChineseWord = 0x6,
	NotInHeadIfAfterText = 0xC0,
	SPECIAL_MASK = 0x80,
	NotInEnd = 0x20,
	TagBold = 0x8,
	TOKEN_MASK = 0x7F,
	Chars = 0x1,
	TagLink = 0xC,
};
