#pragma once
#include "unitysdk/unitysdk.h"

namespace LitJson
{
	inline static constexpr unsigned int ParserToken_TypeDefinitionIndex = 8123;

	enum class ParserToken : ::System::Int32
	{
		Char = 65542,
		Pair = 65546,
		CharSeq = 65541,
		Value = 65550,
		Null = 65540,
		ArrayPrime = 65549,
		ObjectPrime = 65545,
		False = 65539,
		Text = 65543,
		Comment = 65553,
		Epsilon = 65555,
		Number = 65537,
		PairRest = 65547,
		Array = 65548,
		True = 65538,
		ValueRest = 65551,
		String = 65552,
		End = 65554,
		Object = 65544,
		None = 65536,
	};
}
