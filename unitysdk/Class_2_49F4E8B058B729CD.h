#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

namespace MoleMole::GalGame { class MainCityAttractorUseNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_49F4E8B058B729CD_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x9F16A70)
#define CLASS_2_49F4E8B058B729CD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9F16C60)
#define CLASS_2_49F4E8B058B729CD__CTOR_OFFSET UNITYSDK_OFFSET(0x9F169F0)

inline static constexpr unsigned int Class_2_49F4E8B058B729CD_TypeDefinitionIndex = 56046;

class Class_2_49F4E8B058B729CD : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityAttractorUseNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_49F4E8B058B729CD__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49F4E8B058B729CD_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49F4E8B058B729CD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
