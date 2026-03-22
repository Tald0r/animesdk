#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatShow3DModelNode; }

#define CLASS_2_EF31D343665AA4E3_METHOD_2_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x9084110)
#define CLASS_2_EF31D343665AA4E3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x90843C0)
#define CLASS_2_EF31D343665AA4E3__CTOR_OFFSET UNITYSDK_OFFSET(0x9084090)

inline static constexpr unsigned int Class_2_EF31D343665AA4E3_TypeDefinitionIndex = 54340;

class Class_2_EF31D343665AA4E3 : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatShow3DModelNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_EF31D343665AA4E3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF31D343665AA4E3_METHOD_2_21886A8411E71157_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF31D343665AA4E3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
