#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::GalGame { class GalScript; }

#define CLASS_1_223FD66EFE0C6F3B_METHOD_1_6FEC122B6F176886_OFFSET UNITYSDK_OFFSET(0x63E4930)

inline static constexpr unsigned int Class_1_223FD66EFE0C6F3B_TypeDefinitionIndex = 53998;

class Class_1_223FD66EFE0C6F3B : public ::System::Object
{
public:
	static ::System::Boolean Method_1_6FEC122B6F176886(::System::Int32 a1, ::MoleMole::GalGame::GalScript*& a2, ::Foundation::AssetRequestHandle& a3)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::GalGame::GalScript*&, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + CLASS_1_223FD66EFE0C6F3B_METHOD_1_6FEC122B6F176886_OFFSET))(a1, a2, a3);
	}
};
