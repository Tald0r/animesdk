#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatPlayAnimationNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_A2F253DBF92B099E_METHOD_2_7F20D9555862CF22_OFFSET UNITYSDK_OFFSET(0x8AF8F30)
#define CLASS_2_A2F253DBF92B099E_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8AF91B0)
#define CLASS_2_A2F253DBF92B099E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8AF9130)
#define CLASS_2_A2F253DBF92B099E_METHOD_2_E994D45806083FD6_OFFSET UNITYSDK_OFFSET(0x8AF91A0)
#define CLASS_2_A2F253DBF92B099E_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x8AF9210)
#define CLASS_2_A2F253DBF92B099E_METHOD_2_F2D823AD33F1AEA1_OFFSET UNITYSDK_OFFSET(0x8AF9190)
#define CLASS_2_A2F253DBF92B099E__CTOR_OFFSET UNITYSDK_OFFSET(0x8AF8EB0)

inline static constexpr unsigned int Class_2_A2F253DBF92B099E_TypeDefinitionIndex = 44947;

class Class_2_A2F253DBF92B099E : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatPlayAnimationNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_A2F253DBF92B099E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_7F20D9555862CF22(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_A2F253DBF92B099E_METHOD_2_7F20D9555862CF22_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2F253DBF92B099E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::MoleMole::GalGame::MainCityChatPlayAnimationNode* Method_2_F2D823AD33F1AEA1()
	{
		return ((::MoleMole::GalGame::MainCityChatPlayAnimationNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2F253DBF92B099E_METHOD_2_F2D823AD33F1AEA1_OFFSET))(this);
	}

	::System::Void Method_2_E994D45806083FD6(::MoleMole::GalGame::MainCityChatPlayAnimationNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayAnimationNode*))((::PBYTE)hIl2Cpp + CLASS_2_A2F253DBF92B099E_METHOD_2_E994D45806083FD6_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2F253DBF92B099E_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_A2F253DBF92B099E_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};
