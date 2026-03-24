#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatModifyCameraNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_D39D6EF773899D0D_METHOD_2_B03F6D31318CC2B8_OFFSET UNITYSDK_OFFSET(0x8A1F120)
#define CLASS_2_D39D6EF773899D0D_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x8A1F3A0)
#define CLASS_2_D39D6EF773899D0D__CTOR_OFFSET UNITYSDK_OFFSET(0x8A1F0A0)

inline static constexpr unsigned int Class_2_D39D6EF773899D0D_TypeDefinitionIndex = 60484;

class Class_2_D39D6EF773899D0D : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatModifyCameraNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_D39D6EF773899D0D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_B03F6D31318CC2B8(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_D39D6EF773899D0D_METHOD_2_B03F6D31318CC2B8_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_D39D6EF773899D0D_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};
