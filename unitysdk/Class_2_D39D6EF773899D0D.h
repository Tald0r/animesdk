#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

namespace MoleMole::GalGame { class MainCityChatModifyCameraNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_D39D6EF773899D0D_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0xBB3CC40)
#define CLASS_2_D39D6EF773899D0D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBB3CEB0)
#define CLASS_2_D39D6EF773899D0D__CTOR_OFFSET UNITYSDK_OFFSET(0xBB3CBC0)

inline static constexpr unsigned int Class_2_D39D6EF773899D0D_TypeDefinitionIndex = 46914;

class Class_2_D39D6EF773899D0D : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatModifyCameraNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_D39D6EF773899D0D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D39D6EF773899D0D_METHOD_2_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D39D6EF773899D0D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
