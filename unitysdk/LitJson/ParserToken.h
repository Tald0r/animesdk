#pragma once
#include "unitysdk/unitysdk.h"

namespace LitJson
{
	inline static constexpr unsigned int ParserToken_TypeDefinitionIndex = 7823;

	enum class ParserToken : ::System::Int32
	{
		None = 65536,
		False = 65539,
		PairRest = 65547,
		Text = 65543,
		True = 65538,
		Null = 65540,
		Object = 65544,
		String = 65552,
		ValueRest = 65551,
		Number = 65537,
		CharSeq = 65541,
		Comment = 65553,
		Epsilon = 65555,
		ArrayPrime = 65549,
		Array = 65548,
		End = 65554,
		Value = 65550,
		Pair = 65546,
		ObjectPrime = 65545,
		Char = 65542,
	};
}
