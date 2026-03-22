#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class BlendTextureSheetData; }
namespace System { class String; }

#define CLASS_1_988208319B30C710_METHOD_1_798ED5286F794817_OFFSET UNITYSDK_OFFSET(0xA0EF8F0)

inline static constexpr unsigned int Class_1_988208319B30C710_TypeDefinitionIndex = 52043;

class Class_1_988208319B30C710 : public ::System::Object
{
public:
	static ::MoleMole::BlendTextureSheetData* Method_1_798ED5286F794817(::System::String* a1)
	{
		return ((::MoleMole::BlendTextureSheetData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_988208319B30C710_METHOD_1_798ED5286F794817_OFFSET))(a1);
	}
};
