#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

namespace MoleMole::GalGame { class MainCityChatPlayAnimationNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_A2F253DBF92B099E_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x9B1DDA0)
#define CLASS_2_A2F253DBF92B099E_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9B1DFE0)
#define CLASS_2_A2F253DBF92B099E_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x9B1E060)
#define CLASS_2_A2F253DBF92B099E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9B1DF80)
#define CLASS_2_A2F253DBF92B099E_METHOD_2_E994D45806083FD6_OFFSET UNITYSDK_OFFSET(0x9B1E040)
#define CLASS_2_A2F253DBF92B099E_METHOD_2_F2D823AD33F1AEA1_OFFSET UNITYSDK_OFFSET(0x9B1E050)
#define CLASS_2_A2F253DBF92B099E__CTOR_OFFSET UNITYSDK_OFFSET(0x9B1DD20)

inline static constexpr unsigned int Class_2_A2F253DBF92B099E_TypeDefinitionIndex = 40627;

class Class_2_A2F253DBF92B099E : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatPlayAnimationNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_A2F253DBF92B099E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2F253DBF92B099E_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2F253DBF92B099E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2F253DBF92B099E_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_E994D45806083FD6(::MoleMole::GalGame::MainCityChatPlayAnimationNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayAnimationNode*))((::PBYTE)hIl2Cpp + CLASS_2_A2F253DBF92B099E_METHOD_2_E994D45806083FD6_OFFSET))(this, a1);
	}

	::MoleMole::GalGame::MainCityChatPlayAnimationNode* Method_2_F2D823AD33F1AEA1()
	{
		return ((::MoleMole::GalGame::MainCityChatPlayAnimationNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2F253DBF92B099E_METHOD_2_F2D823AD33F1AEA1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2F253DBF92B099E_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}
};
