#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_C5BF10F8B23DC990_METHOD_1_E1AA99088728E983_OFFSET UNITYSDK_OFFSET(0xB2EC3A0)

inline static constexpr unsigned int Class_1_C5BF10F8B23DC990_TypeDefinitionIndex = 56922;

class Class_1_C5BF10F8B23DC990 : public ::System::Object
{
public:
	static ::System::Void Method_1_E1AA99088728E983(::System::UInt32 a1, ::MoleMole::EntityHandle a2, ::System::Action* a3, ::System::Action* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::EntityHandle, ::System::Action*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C5BF10F8B23DC990_METHOD_1_E1AA99088728E983_OFFSET))(a1, a2, a3, a4, a5);
	}
};
