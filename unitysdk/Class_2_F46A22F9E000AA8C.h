#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

namespace MoleMole::GalGame { class MainCityChatChangeActorsNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_F46A22F9E000AA8C_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x5F9C000)
#define CLASS_2_F46A22F9E000AA8C_METHOD_2_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x5F9C1A0)
#define CLASS_2_F46A22F9E000AA8C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x5F9CA80)
#define CLASS_2_F46A22F9E000AA8C__CTOR_OFFSET UNITYSDK_OFFSET(0x5F9BF80)

inline static constexpr unsigned int Class_2_F46A22F9E000AA8C_TypeDefinitionIndex = 55586;

class Class_2_F46A22F9E000AA8C : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatChangeActorsNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_F46A22F9E000AA8C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F46A22F9E000AA8C_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F46A22F9E000AA8C_METHOD_2_B2C52ACF9D9B435B_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F46A22F9E000AA8C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
