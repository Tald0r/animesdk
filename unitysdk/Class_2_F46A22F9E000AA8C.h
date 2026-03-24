#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatChangeActorsNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_F46A22F9E000AA8C_METHOD_2_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0xA7793D0)
#define CLASS_2_F46A22F9E000AA8C_METHOD_2_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0xA7791B0)
#define CLASS_2_F46A22F9E000AA8C_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xA779360)
#define CLASS_2_F46A22F9E000AA8C__CTOR_OFFSET UNITYSDK_OFFSET(0xA779130)

inline static constexpr unsigned int Class_2_F46A22F9E000AA8C_TypeDefinitionIndex = 73476;

class Class_2_F46A22F9E000AA8C : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatChangeActorsNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_F46A22F9E000AA8C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CFC95121222309BD(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_F46A22F9E000AA8C_METHOD_2_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_F46A22F9E000AA8C_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F46A22F9E000AA8C_METHOD_2_B2C52ACF9D9B435B_OFFSET))(this);
	}
};
