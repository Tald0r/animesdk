#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

namespace MoleMole::GalGame { class MainCityChatCustomTransitionNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_147177123441150A_METHOD_2_3C029C534AE1FB6B_OFFSET UNITYSDK_OFFSET(0x8CABD90)
#define CLASS_2_147177123441150A_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x8CABE80)
#define CLASS_2_147177123441150A_METHOD_2_958B8FCF448887B2_OFFSET UNITYSDK_OFFSET(0x8CAC0B0)
#define CLASS_2_147177123441150A_METHOD_2_C3D69C4B9F11A155_OFFSET UNITYSDK_OFFSET(0x8CAC0A0)
#define CLASS_2_147177123441150A_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8CAC040)
#define CLASS_2_147177123441150A_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x8CAC0C0)
#define CLASS_2_147177123441150A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8CABE20)
#define CLASS_2_147177123441150A__CTOR_OFFSET UNITYSDK_OFFSET(0x8CABD10)

inline static constexpr unsigned int Class_2_147177123441150A_TypeDefinitionIndex = 63837;

class Class_2_147177123441150A : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatCustomTransitionNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_147177123441150A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C029C534AE1FB6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_147177123441150A_METHOD_2_3C029C534AE1FB6B_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_147177123441150A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_147177123441150A_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_147177123441150A_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::MoleMole::GalGame::MainCityChatCustomTransitionNode* Method_2_C3D69C4B9F11A155()
	{
		return ((::MoleMole::GalGame::MainCityChatCustomTransitionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_147177123441150A_METHOD_2_C3D69C4B9F11A155_OFFSET))(this);
	}

	::System::Void Method_2_958B8FCF448887B2(::MoleMole::GalGame::MainCityChatCustomTransitionNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatCustomTransitionNode*))((::PBYTE)hIl2Cpp + CLASS_2_147177123441150A_METHOD_2_958B8FCF448887B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_147177123441150A_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}
};
