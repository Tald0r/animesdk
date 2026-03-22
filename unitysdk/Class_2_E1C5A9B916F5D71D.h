#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

namespace MoleMole::GalGame { class MainCityChatConditionNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_E1C5A9B916F5D71D_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xD23A7C0)
#define CLASS_2_E1C5A9B916F5D71D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD23A8B0)
#define CLASS_2_E1C5A9B916F5D71D_METHOD_2_D073B7A46C63850E_OFFSET UNITYSDK_OFFSET(0xD23A920)
#define CLASS_2_E1C5A9B916F5D71D_METHOD_2_D795A4BF26C50189_OFFSET UNITYSDK_OFFSET(0xD23A910)
#define CLASS_2_E1C5A9B916F5D71D__CTOR_OFFSET UNITYSDK_OFFSET(0xD23A740)

inline static constexpr unsigned int Class_2_E1C5A9B916F5D71D_TypeDefinitionIndex = 64515;

class Class_2_E1C5A9B916F5D71D : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatConditionNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_E1C5A9B916F5D71D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E1C5A9B916F5D71D_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E1C5A9B916F5D71D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_D795A4BF26C50189(::MoleMole::GalGame::MainCityChatConditionNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatConditionNode*))((::PBYTE)hIl2Cpp + CLASS_2_E1C5A9B916F5D71D_METHOD_2_D795A4BF26C50189_OFFSET))(this, a1);
	}

	::MoleMole::GalGame::MainCityChatConditionNode* Method_2_D073B7A46C63850E()
	{
		return ((::MoleMole::GalGame::MainCityChatConditionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E1C5A9B916F5D71D_METHOD_2_D073B7A46C63850E_OFFSET))(this);
	}
};
