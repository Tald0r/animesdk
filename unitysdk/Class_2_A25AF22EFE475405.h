#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatSetExitChatTransitionNode; }

#define CLASS_2_A25AF22EFE475405_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xA68B960)
#define CLASS_2_A25AF22EFE475405_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA68BB40)
#define CLASS_2_A25AF22EFE475405__CTOR_OFFSET UNITYSDK_OFFSET(0xA68B8E0)

inline static constexpr unsigned int Class_2_A25AF22EFE475405_TypeDefinitionIndex = 46097;

class Class_2_A25AF22EFE475405 : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatSetExitChatTransitionNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_A25AF22EFE475405__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A25AF22EFE475405_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A25AF22EFE475405_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
