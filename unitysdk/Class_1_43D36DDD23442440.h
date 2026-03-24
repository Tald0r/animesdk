#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CLASS_1_43D36DDD23442440_METHOD_1_1B8540E8BA687BA8_OFFSET UNITYSDK_OFFSET(0x70D4CE0)
#define CLASS_1_43D36DDD23442440_METHOD_1_888222FCA47F05A1_OFFSET UNITYSDK_OFFSET(0x70D4D90)

inline static constexpr unsigned int Class_1_43D36DDD23442440_TypeDefinitionIndex = 56714;

class Class_1_43D36DDD23442440 : public ::System::Object
{
public:
	static ::FlatBuffers::ByteBuffer* Method_1_1B8540E8BA687BA8(::System::String* a1)
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_43D36DDD23442440_METHOD_1_1B8540E8BA687BA8_OFFSET))(a1);
	}

	static ::FlatBuffers::ByteBuffer* Method_1_888222FCA47F05A1(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_43D36DDD23442440_METHOD_1_888222FCA47F05A1_OFFSET))(a1);
	}
};
