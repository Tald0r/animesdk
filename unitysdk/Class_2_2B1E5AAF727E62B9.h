#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

namespace MoleMole::GalGame { class MainCityAttractorEnableNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_2B1E5AAF727E62B9_METHOD_2_C56DC3B2E26040B8_OFFSET UNITYSDK_OFFSET(0xA130F80)
#define CLASS_2_2B1E5AAF727E62B9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA1311A0)
#define CLASS_2_2B1E5AAF727E62B9__CTOR_OFFSET UNITYSDK_OFFSET(0xA130F00)

inline static constexpr unsigned int Class_2_2B1E5AAF727E62B9_TypeDefinitionIndex = 63328;

class Class_2_2B1E5AAF727E62B9 : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityAttractorEnableNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_2B1E5AAF727E62B9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_C56DC3B2E26040B8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B1E5AAF727E62B9_METHOD_2_C56DC3B2E26040B8_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B1E5AAF727E62B9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
