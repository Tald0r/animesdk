#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

namespace MoleMole::GalGame { class MainCityChatDelayNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_EFA8CBE40BB815E7_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x79ABB40)
#define CLASS_2_EFA8CBE40BB815E7_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x79ABD90)
#define CLASS_2_EFA8CBE40BB815E7__CTOR_OFFSET UNITYSDK_OFFSET(0x79ABAC0)

inline static constexpr unsigned int Class_2_EFA8CBE40BB815E7_TypeDefinitionIndex = 66078;

class Class_2_EFA8CBE40BB815E7 : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatDelayNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_EFA8CBE40BB815E7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EFA8CBE40BB815E7_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EFA8CBE40BB815E7_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
