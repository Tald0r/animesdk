#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9876AE41D0DC17C7;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class String; }

#define CLASS_1_320489181BF320B2_METHOD_1_AC67F4F7B67C32E0_OFFSET UNITYSDK_OFFSET(0x6C30530)

inline static constexpr unsigned int Class_1_320489181BF320B2_TypeDefinitionIndex = 54250;

class Class_1_320489181BF320B2 : public ::System::Object
{
public:
	static ::Class_1_9876AE41D0DC17C7* Method_1_AC67F4F7B67C32E0(::MoleMole::HollowChessboard::HollowEntity* a1, ::System::String* a2)
	{
		return ((::Class_1_9876AE41D0DC17C7*(*)(::MoleMole::HollowChessboard::HollowEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_320489181BF320B2_METHOD_1_AC67F4F7B67C32E0_OFFSET))(a1, a2);
	}
};
